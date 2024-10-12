#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct createnode(int key)
{
    list temp = (list)malloc(sizeof(node));
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
}
typedef struct node node;
typedef struct node *list;
int  insertnode(int key){
    while (root->data!=key)
    {
        
    
if (root->data== key)
{
    return 1;
}
if (root->data<key)
{
    root = root->ledt;
}
else{
    root=root->right;
}
    }



}
int main()
{
    int root = createnode(3);
    int p1 = createnode(5);
    int p2 = createnode(4);
    int p3 = createnode(6);
    int p4 = createnode(2);
    root->right = p1;
    p->left = p2;
p1->right = p3; 
    p2->left = p4;
}