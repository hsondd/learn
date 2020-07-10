#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} node;

node* head = NULL;

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    else return false;
}

void show()
{
    node* p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}

int length()
{
    int count = 0;
    node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void addHead(int value)
{
    node* link = (node*)malloc(sizeof(node));
    link->data = value;//tro data->link den value
    link->next = head;//cho next cua link den head cu
    head = link;//gan link la head moi
}

void addPos(int pos, int value)
{
    if(pos == 0 || head == NULL){
        addHead(value);
    }
    else{
        int k = 1;
        node *p = head;
        if(k != pos || p != NULL){
            p = p->next;
            k++;
        }
        if(k != pos){
            printf("Loi nhap vi tri\n");
        } else{
            node* link = (node*)malloc(sizeof(node));
            link->data = value;
            link->next = p->next;
            p->next = link;
        }
    }
}

void delHead()
{
    if(head == NULL){
        printf("node rong \n");
    }
    else{
        head = head->next;
    }
}


int search(int value)
{
    int pos = 1;
    for(node* p = head; p != NULL; p = p->next)
    {
        if(p->data == value){
            return pos;
        }
        ++pos;
    }
    return -1;
}

void delPos(int pos)
{
    if(pos == 1){
        delHead();
    } else{
        int count = 1;
        node *p = head;
        while(count != pos -1){
            count++;
            p = p->next;
        }
        p->next = p->next->next;
    }
}

int main()
{
    addHead(1);
    addHead(2);
    addHead(3);
    addHead(4);
    // addPos(5,69);
    // delHead();


    show();
    printf("\nDo dai link list: %d\n", length());
    printf("\nPhan tu 2 o vi tri: %d\n", search(2));
    delPos(3);
    show();
    return 0;
}