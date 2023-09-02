#include<stdio.h>
int main()
{
    int hn;
    printf("Enter the house number");
    scanf("%d",&hn);

    if (hn>100)
    printf("invalid input");

    else if (hn%4==1){
    printf("House colour is red ");
}
    else if (hn%4==2)
    printf("House colour is yellow ");

    else if (hn%4==3)
    printf("House colour is white ");

    else if (hn%4==0)
    printf("House colour is blue ");

    return 0;
}