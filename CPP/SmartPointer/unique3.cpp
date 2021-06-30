#include <iostream>
#include <vector>
#include <memory>
#include <cstdio>
#include <fstream>
#include <cassert>
#include <functional>

struct B {
    virtual void bar() { std::cout << "B::bar\n"; }
    virtual ~B() = default;
};

struct D : B
{
    D() { std::cout << "D::D\n"; }
    ~D() { std::cout << "D::~D\n" }
    void bar() override { std::cout << "D::bar\n"; }
};

std::unique_ptr<D> pass_through(std::unique_ptr<D> p)
{
    p->bar();
    return p;
}

void close_file(std::FILE* fp) { std::fclose(fp); }

struct List {
    struct  Node
    {
        int data;
        std::unique_ptr<Node> next;
        Node(int data) : data{data}, next{nullptr} {}
    };
    List() : head{nullptr} {}
    ~List() { while (head) head = std::move(head->next); }

    void push(int data) {
        auto temp = std::make_unique<Node>(data);
        if (head) temp->next = std::move(head);
        head = std::move(temp);
    }
private:
    std::unique_ptr<Node> head;
};

int main()
{
    std::cout << "1) Unique ownership semantics demo\n";
    {
        auto p = std::make_unique<D>();
        auto q = pass_through(std::move(p));
        assert(!p);
        q->bar();
    }

    std::cout << "2) Runtime polymorphism demo\n";
    {
        std::unique_ptr<B> p = std::make_unique<D>();
        p->bar();
        std::vector<std::unique_ptr<B>> v;

        v.push_back(std::make_unique<D>());
        v.push_back(std::move(p));
        v.emplace_back(new D);

        for(auto& p : v) p->bar();
    }
}
