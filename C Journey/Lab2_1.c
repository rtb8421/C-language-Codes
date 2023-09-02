#include<stdio.h>
int main()  //find the percentage of students in 5 different subjects

{
    int n1,n2,n3,n4,n5,total;
    float per;
    printf("Enter students mark out of 100 marks\n"); 
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    total=(float)n1+n2+n3+n4+n5;
    per=(float)total/5;
    printf("Total marks=%d\n",total);
    printf("Percentage is=%f\n",per);
    return 0;
}