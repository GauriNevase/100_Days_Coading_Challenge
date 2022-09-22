#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* next;
    int info;
};
struct node* getnode()
{
    return((struct node*)malloc(sizeof(struct node)));
}
void freenode(struct node*p)
{
    free(p);
}
struct node *list=NULL;
void insertbeg()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    struct node *newnode;
    newnode=getnode();
    newnode->info=x;
    newnode->next=NULL;
    list=newnode;
}
void insertend()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    struct node *newnode, *temp;
    newnode=getnode();
    newnode->info=n;
    newnode->next=NULL;
    temp=list;
    if(temp==NULL)
    {
        list=newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void insertposition()
{
    int p;
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    int count=1;
    printf("Enter the position :");
    scanf("%d",&p);
    struct node *newnode, *temp;
    newnode=getnode();
    newnode->info=x;
    newnode->next=NULL;
    temp=list;
    if(temp==NULL)
    {
        list=newnode;
    }
    else
    {
        while(count<p)//check 
        {
            temp=temp->next;
            count++;
        }
        temp->next=newnode;
    }
}
void display()
{
    struct node *temp;
    temp=list;
    if(list=NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->info);
            temp=temp->next;
        }
    }
}
void deletebeg()
{
    struct node *temp;
    temp=list;
    temp->next=NULL;
}
void deleteend()
{
    struct node *temp;
    temp=list;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void deletepoistion()
{
    int p;
    int count=1;
    printf("Enter the poistion :");
    scanf("%d",&p);
    struct node *temp;
    temp=list;
    while(count<p-1)
    {
        temp=temp->next;
        count++;
    } 
    temp->next=temp->next->next;   
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert at the begining\n");
        printf("2.Insert at the end\n");
        printf("3.Insert at the position\n");
        printf("4.Delete at the begining\n");
        printf("5.Delete at the end\n");
        printf("6.Delete at the position\n");
        printf("7.Display\n");
        printf("8.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertbeg();
            break;
            case 2:insertend();
            break;
            case 3:insertposition();
            break;
            case 4:deletebeg();
            break;
            case 5:deleteend();
            break;
            case 6:deletepoistion();
            break;
            case 7:display();
            break;
            case 8:exit(0);
            break;
            default :
            printf("Invalid Choice\n");
            break;
        }
    }
}