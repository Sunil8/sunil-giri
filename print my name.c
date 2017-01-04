#include<stdio.h>

void main()
{
    int i,j,n=10;
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n|| (j==1&&i<n/2)||i==n/2|| (j==n&&i>(n/2)))
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
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1;j<=n;j++)
        {
            if(i==n || j==n|| j==1)
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
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n||j==i)
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
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==(n/2))
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
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1;j<=n;j++)
        {
            if(j==1||i==n)
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

}
