#include<stdio.h>
int main(){

    float n1,n2,n3,n4;
    printf("Enter the number of days required by n1 n2 and n3 to complete the work alone\n");
    scanf("%f%f%f",&n1,&n2,&n3);

    n4=(n1*n2*n3)/(n1*n2+n2*n3+n3*n1);

    printf("Total no.of days to finish the work  togather=%f",n4);




    return 0;
}