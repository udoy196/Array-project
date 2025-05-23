//Matrix addition , subtraction, multiplication
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],multi[100][100];
    int i,j,r1,r2,c1,c2;
    printf("Enter row and column for a matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for b matrix : ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Enter row and column for a matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and column for b matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    printf("Enter elements of A matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of B matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    printf("A matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("B matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int addition[100][100];
    if(r1==r2 && c1==c2)
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                addition[i][j] = a[i][j] + b[i][j];
            }
            printf("\n");
        }

        printf("Additon =\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d\t",addition[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error");
    }
    int sub[100][100];
    if(r1==r2 && c1==c2)
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                sub[i][j] = a[i][j] - b[i][j];
            }
            printf("\n");
        }
        printf("Subtract =\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d\t",sub[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error");
    }
    int result[100][100],sum=0,k;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum = 0;
        }
        printf("\n");
    }
    printf("Multiplication Result =\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
