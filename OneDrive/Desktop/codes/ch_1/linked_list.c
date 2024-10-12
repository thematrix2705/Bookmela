#include <stdio.h>
#include <stdlib.h>
int no, op, value, no;
int operation();
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
typedef struct node *list;

list head = NULL;
list head2 = NULL;
list temp = NULL;
list head1 = NULL;

int Insertatbegin()
{
    list temp = (list)malloc(sizeof(node));
    printf("Enter the value : ");
    scanf("%d", &value);
    temp->data = value;
    temp->next = head;
    head = temp;
    operation();
}
int Insertatend()
{
    list temp = (list)malloc(sizeof(node));
    printf("Enter the value : ");
    scanf("%d", &value);
    temp->data = value;
    temp->next = NULL;

    if (head == NULL)
    {
        head == temp;
    }
    else
    {
        head1 = head;
        while (head1->next != NULL)
        {
            head1 = head1->next;
        }
        head1->next = temp;
    }
    operation();
}
int Insertbefore()
{
    list temp = (list)malloc(sizeof(node));
    printf("Enter the No. : ");
    scanf("%d", &no);
    printf("Enter the value : ");
    scanf("%d", &value);
    temp->data = value;
    temp->next = NULL;

    head1 = head;
    while (head1->next->data != no)
    {
        head1 = head1->next;
    }
    temp->next = head1->next;
    head1->next = temp;
    operation();
}
int Insertafter()
{
    list temp = (list)malloc(sizeof(node));
    printf("Enter the No. : ");
    scanf("%d", &no);
    printf("Enter the value : ");
    scanf("%d", &value);
    temp->data = value;
    temp->next = NULL;
    head1 = head;
    while (head1->data != no)
    {
        head1 = head1->next;
    }
    temp->next = head1->next;
    head1->next = temp;
    operation();
}
int Displaylist()
{
    list point = head;
    printf("[");
    while (point != NULL)
    {
        printf("  %d  ", point->data);
        point = point->next;
    }
    printf("]");
    printf("\n");
    operation();
}
int Deletefront()
{
    head1 = head;
    temp = head;
    head = head1->next;
    free(temp);
    operation();
}
int Deleteend()
{
    if (head->next == NULL)
    {
        free(head);
    }
    else
    {
        head1 = head;
        while (head1->next->next != NULL)
        {
            head1 = head1->next;
        }
        temp=head1->next;
        free(temp);
        head1->next = NULL;
    }
    operation();
}            
int Deletebefore()
{
    printf("Enter the no before you want to Delete : ");
    scanf("%d", &no);
    head1 = head;
    while (head1->next->next->data != no)
    {
        head1 = head1->next;
    }
    temp = head1->next;
    head1->next = head1->next->next;
    free(temp);
    operation();
}
int insertasce()
{
    head1=head;
    printf("Enter the value you want to enter : ");
    scanf("%d",&no);
    list temp=(list)malloc(sizeof(node));
    while (head1->next->data < no)
    {
        head1=head1->next;
    }
    head2=head1->next;
    temp->next=head2;
    head1->next=temp;
    temp->data=no;
    operation();


}
int Deleteafter()
{
    printf("Enter the no after you want to Delete : ");
    scanf("%d", &no);
    head1 = head;
    while (head1->data != no)
    {
        head1 = head1->next;
    }
    temp = head1->next;
    head1->next = head1->next->next;
    free(temp);
    operation();
}
int Deletevalue()
{
    printf("Enter the value you want to delete : ");
    scanf("%d", &no);
    head1 = head;
    while (head1->next->data != no)
    {
        head1 = head1->next;
    }
    temp = head1->next;
    head1->next = head1->next->next;
    temp->next = NULL;
    free(temp);
    operation();
}
int Deletelist()
{
    head1 = head;
    free(head1);

    return 0;
}
int main()

{
    printf("-----------------------------------------------\n");
    printf("   Select the operation you want to perform.   \n");
    printf("-----------------------------------------------\n");
    printf("\t1.Insertatbegin.\n\t2.Inseratend.\n\t3.Insertbefore\n\t4.Insertafter.\n\t5.Deletefront.\n\t6.Deleteend\n\t7.Deletebefore\n\t8.Deleteafter\n\t9.Deletevalue\n\t10.Deletelist\n\t11.Displaylist.\n\t12.Insertasce\n\t13.Exit.\n");
    operation();
}
int operation()
{
    printf("Enter the operation no : ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        Insertatbegin();

        break;
    case 2:
        Insertatend();
        break;
    case 3:
        Insertbefore();
        break;
    case 4:
        Insertafter();
        break;
    case 5:
        Deletefront();
        break;
    case 6:
        Deleteend();
        break;
    case 7:
        Deletebefore();
        break;
    case 8:
        Deleteafter();
        break;
    case 9:
        Deletevalue();
        break;
    case 10:
        Deletelist();
        break;
    case 11:
        Displaylist();
        break;
        case 12:
        insertasce();
        break;
    case 13:
        return 0;
        break;

    default:
        printf("Invalid operation.Please choose valid operation.");
        break;
    }
}