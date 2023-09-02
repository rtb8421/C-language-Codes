#include<stdio.h>

int main()
{
    char character;
    printf("Enter a character\n");
    scanf("%c",&character);
    printf("next character=%c\n",character+1);
    printf("previous character=%c\n",character-1);
    
    return 0;
}