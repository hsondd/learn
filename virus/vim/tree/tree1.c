#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
} Node;

Node *createNode(int value)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node *insert(Node *root, int data)
{
    if(root == NULL){
        return createNode(data);
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }
    if(data > root->data){
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(Node *root)
{
    if(root = NULL) return;
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 4);
    
    inorder(root);
}