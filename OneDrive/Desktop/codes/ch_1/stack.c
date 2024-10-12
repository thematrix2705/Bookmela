#include <stdio.h>
void operation();
int op;
int o, n, a, b, top = -1, Top = -1, n;
#define size 5
int choice(int op);
int stack[size];
int temp[size];

int push()
{
    printf("enter the no you want to push:");
    scanf("%d", &n);
    if (top == size - 1)
    {
        printf("the stack is overflow.");
    }
    top++;
    stack[top] = n;
    operation();
}

int pop()
{
    if (top < 0)
    {
        printf("The stack is underflow.");
    }

    else
    {
        top--;
    }
    stack[top];

    operation();
}
int change()
{
    printf("Enter the new you want to change : ");
    scanf("%d", &o);
    printf("Enter the new no :");
    scanf("%d", &n);
    a = stack[top];
    do
    {
        temp[Top] = stack[top];
        top--;
        Top++;

    } while (stack[top] != o);
    if (stack[top] == o)
    {
        stack[top] = n;
    }
    if (stack[top] == n)
    {
        do
        {
            top++;
            Top--;
            stack[top] = temp[Top];

        } while (stack[top] != a);
    }
    operation();
}

int Display()
{
    printf("The stack contains : ");
    for (int i = top; i >= 0; i--)
    {
        printf("\n\t%d", stack[i]);
    }
    printf("\n");
    operation();
}
int peep()
{
    printf("The top no is %d and the top no is %d.\n", top, stack[top]);
    operation();
}
void operation()
{
    printf("Which opreation do you want to perfrom?");
    printf("\n\t1.Push\n\t2.Pop\n\t3.Peep\n\t4.Change\n\t5.Dispaly\n\t6.exit\n\t");
    printf("Enter the op no : ");
    scanf("%d", &op);
    choice(op);
}
int main()
{
    operation();
    return 0;
}

int choice(int op)
{
    switch (op)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peep();
        break;
    case 4:
        change();
        break;
    case 5:
        Display();
        break;
    case 6:
        return 0;

    default:
        printf("Invalid choice.\nPlease make valid choice.");
        break;
    }
}