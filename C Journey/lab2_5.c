#include <stdio.h>

int main() {
    int km;
    float meter,feet;
    printf("Enter the length\n");
    scanf("%d",&km);
    printf("Km coverted to feet=%f\n",feet=(float)km*3080.8);
    printf("km converted to meter=%f\n",meter=(float)km*1000);
   
    
  return 0;
}