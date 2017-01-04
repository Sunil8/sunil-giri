#include<stdio.h>

int main()
{
    int i,j,c,n=10;

    for(c=1;c<=2;c++)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j>1&&j<i)
            {
                if(i==n)
                {
                    printf("*   ");
                }
                else
                {
                    printf("    ");
                }
            }
            else
            {
                printf("*   ");
            }
        }
        printf("\n");
    }
    }

    printf("*\n*\n*\n*\n*\n");

    return 0;
}
