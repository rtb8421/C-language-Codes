#include<stdio.h>

int main(){

    int start,end,fuel_s,fuel_e,fu,mt;
    float ovc;
    printf("enter the mileage of the car at start\n");
    scanf("%d",&start);
    printf("enter the milage of the car at end\n");
    scanf("%d",&end);

    printf("Fuel level of the car at the start and at the end\n");
    scanf("%d%d",&fuel_s,&fuel_e);

    fu=fuel_s-fuel_e;
    mt=start-end;
    ovc=(float)mt/fu;
    printf("fuel used%d\nmileage travelled%d\noverall consumption%f",fu,mt,ovc);




    return 0;
}