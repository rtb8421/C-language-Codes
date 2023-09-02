#include<stdio.h>
#include<string.h>

int main(){
    int d;

char name[15];
printf("Enter your name\n");

gets(name);
d=strlen(name);

printf("length=%d",d);

return 0;

}
