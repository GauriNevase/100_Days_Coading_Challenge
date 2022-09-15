#include<stdio.h>
int main()
{
    int N;
    int A[5];
    int i,temp=0;
    printf("Enter the no of integers in array A :");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter the data:");
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++)
    {
    printf("%d",A[i]);
    }
    printf(" \n");
    for(i=0;i<N;i++)
    { 
        while (i<N/2)
        {
            temp=A[i];
            A[i]=A[N-i-1];
            A[N-i-1]=temp;
            N--;
            printf("%d",A[i]);
        }
     
        printf("%d",A[3]);
    }
    return 0;
}