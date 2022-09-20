#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
//int N=5;
int top=-1;
void push(int x)
{
    
    if(top==N-1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
void main()
{
    int ch;
    int n1;

    while(1)
    {
        //clrscr();

        printf("\n----Stack Operation---");
        printf("\n1. Push an element into the stack");
        printf("\n2. Pop out an element from the stack");
        printf("\n3. Display the stack elements");
        printf("\n4. Exit");


        printf("\n Enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
                case 1: printf("\n Enter the element to be pushed into the stack:");
                        scanf("%d",&n1);
                        push(n1);
                        break;

                case 2: pop();
                        //getch();
                        break;

                case 3:	display();
                        //getch();
                        break;
                case 4: exit(1);

                default: 	printf("\n Wrong Choice");
                            break;
        } 	//end of switch

    } //end of while

}
/* End of Main Method */