#include<stdio.h>

int main()    //wap to scan integer & print octal,hexadecimal and decimal value
{   int var;
    printf("Select a number\n");
    scanf("%d",&var);
    printf("octal number is=%o\n",var);
    printf("Decimal value is=%d\n",var);
    printf("Hexadecimal value is=%x\n",var);
    printf("integer value is=%i\n",var);
    
    return 0;
}