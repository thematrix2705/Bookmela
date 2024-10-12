#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
    int p;
}q;

typedef struct queue *list;
typedef struct queue  node ;
list start=NULL;
list start1=NULL;

int insert(int value,int p)
{
   list temp=(list)malloc(sizeof(node));
   start1=start;
   
   if(start->next=NULL)
   {
      start->next=temp; 
      temp->data=value;
      temp->p=p;
   }
   else{
   while (p>start1->p)
   {
       
   }
   }
   
   temp->data=value;

}
int main()
{
 insert(10,1);
}