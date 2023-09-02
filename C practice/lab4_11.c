#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch==97)
        printf("previous character is %c\nand next character is %c\n",122,98);
    else if(ch==122)
       printf("Next character is %c\nand previous character is %c", 97,121);

    else if(ch>=97 && ch<=122)
        printf("Next and previous character are\n%c\n%c", ch+1,ch-1);
   
    else
        printf("%c", ch);

        return 0;
}