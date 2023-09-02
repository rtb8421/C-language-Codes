#include<stdio.h>
int main()
{
    int a,b,c,d,e,tm;
    float per;
    printf("enter the 5 subject mark out of 100 marks\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    tm=a+b+c+d+e;
    per=tm/5;

    if(per>100)
          printf("Enter valid marks\n");

    else if (per>=90 && per<=100)
          printf("Grade A+");
    
    else if (per>=80 && per<90)
          printf("Grade A");

    else if (per>=70 && per<80)
          printf("Grade B+");

    else if (per>=60 && per<70)
          printf("Grade B");

    else if (per>=50 && per<60)
          printf("Grade C");

    else
          printf("Grade F");

    
    return 0;
}