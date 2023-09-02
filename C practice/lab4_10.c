#include <stdio.h>
int main()
{
    char c1,c2;
    printf("Enter 1st and 2nd character\n");
    scanf("%c %c", &c1,&c2);
    if(c1==c2){
    printf("Both character are same\n");
    }

    else if(c1!=c2)
    printf("covent 2nd alphabet as the opposite case of first alphabet %c",c2=c1-32);
    else{
    printf("invalid");
}
    return 0;

}