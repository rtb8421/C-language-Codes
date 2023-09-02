#include<stdio.h>

void Matrix(int matrix[][10],int row,int col)
{
    printf("\n Enter elements \n");
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            printf("Enter a%d%d:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void multiply(int first[][10],int second[][10],int result[][10],int r1,int c1,int r2,int c2)
{
    for(int i = 0;i<r1;++i)
    {
        for(int j = 0;j<c2;++j)

        {
            result[i][j] =0;
        }
    }
    for(int i = 0;i<r1;++i)
    {
        for(int j = 0;j<c2;++j)
        {
            for(int k=0;k<c1;++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
void display(int result[][10],int row,int col) 
{
    printf("\noutput matrix\n");
    for(int i =0;i<row;++i)
    {
        for(int j = 0;j<col;++j)
        {
            printf("%d  ",result[i][j]);

            if(j==col-1)
            printf("\n");
        }
    }
}
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,c1,r2,c2;
    printf("Enter rows and col for the first matrix\n");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and col for the second matrix\n");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error! Enter row and col again");
         printf("\nEnter rows and col for the first matrix\n");
        scanf("%d",&r1,&c1);

        printf("Enter rows and col for the second matrix");
        scanf("%d",&r2,&c2);
    }
    Matrix(first,r1,c1);
    Matrix(second,r2,c2);

    multiply(first,second,result,r1,c1,r2,c2);
    display(result,r1,c2);

    return 0;
}