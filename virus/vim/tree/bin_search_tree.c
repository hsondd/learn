#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
typedef struct Tree
{
    int data;
    struct Tree* left;
    struct Tree* right;
} Node;
 
 
 
void Free( Node* root )
{
    if ( root == NULL )
        return;
 
    Free( root->left );
    Free( root->right );
    free( root );
}
 
int LeftOf( const int value, const Node* root )
{
    // Nếu bạn muốn cây BST cho phép giá trị trùng lặp, hãy sử dụng dòng code thứ 2
    return value < root->data;
//    return value <= root->data;
}
 
int RightOf( const int value, const Node* root )
{
    return value > root->data;
}
 
Node* Insert( Node* root, const int value )
{
    if ( root == NULL )
    {
        Node* node = (Node*)malloc( sizeof( Node ) );
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if ( LeftOf( value, root ) )
        root->left = Insert( root->left, value );
    else if ( RightOf( value, root ) )
        root->right = Insert( root->right, value );
    return root;
}
 
bool Search( const Node* root, int value )
{
    if ( root == NULL )
        return false;
    if(root->data == value){
        return true;
    }else if ( root->data > value ){
        return Search( root->left, value );
    }else if( root->data < value ){
        return Search( root->right, value );
    }
}
 
int LeftMostValue( const Node* root )
{
    while ( root->left != NULL )
        root = root->left;
    return root->data;
}
 
Node* Delete( Node* root, int value )
{
    if ( root == NULL )
        return root;
    else if ( root->data > value )
        root->left = Delete( root->left, value );
    else if ( root->data < value )
        root->right = Delete( root->right, value );
    else//tim dc data can xoa
    {
        // root->data == value, delete this node
        if ( root->left == NULL )//nut trai bang null, day la cay con phai
        {
            //Duyet sang phai nut can xoa, cap nhat moi lien ket giua 
            // cha cua nut can xoa va con cua nut can xoa
            Node* newRoot = root->right;
            free( root );
            return newRoot;
        }
        if ( root->right == NULL )
        {
            Node* newRoot = root->left;
            free( root );
            return newRoot;
        }
        root->data = LeftMostValue( root->right );
        root->right = Delete( root->right, root->data );
    }
    return root;
}
 
void PreOrder(Node* root){
    if(root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
 
void InOrder(Node* root){
    if(root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}
 
void PostOrder(Node* root){
    if(root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}
 
 
int main()
{
    Node* root = NULL;
 
    root = Insert( root, 25 );
    root = Insert( root, 15 );
    root = Insert( root, 50 );
    root = Insert( root, 10 );
    root = Insert( root, 22 );
    root = Insert( root, 35 );
    root = Insert( root, 70 );
    root = Insert( root, 4 );
    root = Insert( root, 12 );
    root = Insert( root, 18 );
    root = Insert( root, 24 );
    root = Insert( root, 31 );
    root = Insert( root, 44 );
    root = Insert( root, 66 );
    root = Insert( root, 90 );
    printf("\nDuyet preorder : ");
    PreOrder(root);
    printf("\nDuyet inorder  : ");
    InOrder(root);
    printf("\nDuyet postorder:");
    PostOrder(root);

    if (Search(root,50) == 1){
        printf ("\nco 50\n");

    }else{
        printf("Ko co\n");
    }
 
    printf("\n==Thu them phan tu 15 vao BTS==\n");
    Insert(root, 15);
    printf("\nDuyet preorder : ");
    PreOrder(root);
    printf("\nDuyet inorder  : ");
    InOrder(root);
    printf("\nDuyet postorder:");
    PostOrder(root);
 
 
    printf("\n==Thu xoa phan tu 50 khoi BTS==\n");
    Delete(root, 50);
    printf("\nDuyet preorder : ");
    PreOrder(root);
    printf("\nDuyet inorder  : ");
    InOrder(root);
    printf("\nDuyet postorder:");
    PostOrder(root);
 
    if (Search(root,50) == 1){
        printf ("\nco 50\n");

    }else{
        printf("\nKo co\n");
    }
 
 
    Free( root );
    root = NULL;
    return 0;
}