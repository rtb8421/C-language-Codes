#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);

    if(x==y)
        printf("Addition is %d\n",x+y);

    else if(x>y)
        printf("substract x from y %d\n",y-x);

    else 
        printf("substract y from x %d\n",x-y);

    return 0;
}