#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter 3 numbers\n");
 scanf("%d%d%d",&a,&b,&c);

 if(a>b && a>c)
  printf("Mximum number is a = %d\n",a);
 else if(b>a && b>c)
  printf("Mximum number is b = %d\n",b);
 else
   printf("Mximum number is c = %d\n",c);
 if(a<b && a<c)
  printf("Minimum number is a = %d\n",a);
 else if(b<a && b<c)
  printf("Minimum number is b = %d\n",b);
 else
   printf("Minimum number is c= %d\n",c);

   return 0;
}