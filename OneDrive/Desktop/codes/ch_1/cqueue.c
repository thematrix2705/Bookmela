#include <stdio.h>
int op, n;
int front = -1, rear = 0;
#define size 5
int queue[size];

int insert();
int operation();
int delete();
int display();
int choice(int op);
int Qempty()
{
    if (front == -1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int qfull()
{
    if (front == (rear + 1) % size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int insert()
{
    if (qfull())
    {
        printf("\nThe Queue is full.\n");
    }
    else
    {
        printf("Enter the no you want to insert : ");
        scanf("%d", &n);
        if (front == -1)
        {
            front = rear = 0;
            queue[rear] = n;
        }
        else
        {

            rear = (rear + 1) % size;
            queue[rear] = n;
        }
    }
    operation();
}
int delete()
{
    if (Qempty())
    {
        printf("The queue is empty.\n");
    }
    else
    {
        if (front == rear)
        {
            front = rear = 0;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    operation();
}
int display()
{
    int i;
    i = front;
    while (i != rear)
    {
        printf("%d\t", queue[i]);
        i = (i + 1) % size;
    }
    printf("%d\n", queue[i]);
    operation();
}
int operation()
{
    printf(" ------------------------------------------------\n");
    printf("   Select the operation you want to perform.  \n ");
    printf("------------------------------------------------\n");
    printf("\t1.Insert\n\t2.Delete\n\t3.Display\n\t4.Exit.\n\t");
    printf("Enter the operation no you want to perform : ");
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
    default:
        printf("Invalide operation.Please enter valid operation.");
        operation();
        break;
    }
}
int main()
{
    operation();
}