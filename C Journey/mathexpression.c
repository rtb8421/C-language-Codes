#include <stdio.h>

int main()
{
  int a,b,u,x;
  printf("Enter the values");
  scanf("%d%d%d",&a,&b,&u);
  x=(a*a*a*b+a*a*a-b*b*b)/(a*a+u+0.2);
  printf("value is %d",x);
  
  return 0;
}