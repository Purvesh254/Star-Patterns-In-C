/*
Enter number of rows : 5

* * * * *
*     *
*   *
* *
*

*/

#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(j==i||j==n||i==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}