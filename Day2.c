/*Alice is driving from her home to her office which is AA kilometers away and 
will take her XX hours to reach.
Bob is driving from his home to his office which is BB kilometers away and 
will take him YY hours to reach.

Determine who is driving faster, else, if they are both driving at the same 
speed print EQUAL#include<stdio.h>
*/
int main()
{
    int i;
    scanf("%d",&T);//Number of test cases
    while(T--)
    {
        float A,X,B,Y,V,U;
        scanf("%f%f%f%f",&A,&X,&B,&Y);//A is the distance travelled by Alice
        //X is the the time taken by alice
        //B is the distance travelled by Bob
        //Y is the time taken by bob
        V=A/X;
        U=B/Y;
        if(V>U)
        {
            printf("ALICE\n");
        }
        else if(U>V)
        {
            printf("BOB\n");
        }
        else
        {
            printf("EQUAL\n");
        }
    }
    return 0;
}