/*In Chefland, a tennis game involves 44 referees.
Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.

Given the decision of the 44 referees, help Chef determine whether the ball is considered inside limits or not.*/
#include<stdio.h>
int main()
{
    int T,R1,R2,R3,R4,i,C;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d %d %d",&R1,&R2,&R3,&R4);
        C=R1+R2+R3+R4;
        if(C==0)
        {
            printf("In");
        }
        else
        {
            printf("Out");

        }
    }
    return 0;
}