#include<stdio.h>
#include<string.h>

int main(){

char str[20];
char str1[20];

printf("Enter a string\n");
scanf("%s",str1);



strcpy(str,str1);
printf("First string %s \n second string %s\n",str,str1);
strcpy(str,"rohan");
strcpy(str1,"roshan");

printf("First string %s \n second string %s\n",str,str1);



return 0;

}
