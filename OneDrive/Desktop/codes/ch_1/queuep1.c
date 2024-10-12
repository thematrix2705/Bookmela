#include <stdio.h>
int op, n;
int insert();
int choice(int op);
int operation();
int delete();
int display();

#define size 6
struct Queue
{
    int queue[size];
    int front, rear;

} q;

int insert()
{
    if (q.rear == size - 1)
    {
        printf("The Quese is full.\n");
        operation();
    }
    printf("Enter the no you want to Insert : ");
    scanf("%d", &n);
    if (q.front == -1)
    {
        q.front++;
    }

    q.queue[++q.rear] = n;

    operation();
}
int delete()
{
    if (q.front == -1 || q.front > q.rear)
    {
        printf("The Queue is empty.\n");
        operation();
    }
    q.front++;

    operation();
}
int display()
{
    printf("The Queue contains the below No. :  \n");
    for (int i = q.front; i <= q.rear; i++)
    {
        printf("%d\t", q.queue[i]);
    }
    printf("\n");
    operation();
}

int operation()
{
    printf("-----------------------------------------------\n");
    printf("   Select the operation you want to perform.   \n");
    printf("-----------------------------------------------\n");
    printf("\t1.Insert.\n\t2.Delete.\n\t3.Display.\n\t4.Exit\n");
    printf("   Enter the no of operation you want to perform  : ");
    scanf("%d", &op);
    choice(op); 
}
int choice(int op)
{
    switch (op)
    {
    case 1:
        insert();
        break;
    case 2:
        delete ();
        break;
    case 3:
        display();
        break;
    case 4:
        return 0;
        break;
    default:
        printf("Invalid operation.Please select valid operation. ");
        operation();
        break;
    }
}

int main()
{
    q.front = -1;
    q.rear = -1;
    operation();
}
