#include<stdio.h>

void indian();
void british();

int main()
{
    char ch;
    printf("Enter i for indian and b for british");
    scanf("%c",&ch);

    if(ch=='i')
    {
        indian();
    }
    else{
        british();
    }

    return 0;
}

void indian()
{
    printf("Namaste\n");

}

void british()
{
    printf("hi\n");
}