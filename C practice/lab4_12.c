#include<stdio.h>

int main() {
    int bp, hra, da, gp, np, tax;

    printf("Enter Basic Pay: ");
    scanf("%d", &bp);

    if(bp<12000){
    hra = bp * 0.1;
    da = bp * 0.5; 
    gp = bp + hra + da;
    tax = 0;
    np = gp - tax;
    }
    else if(bp>=12000 && bp<30000){
    hra = bp * 0.15;
    da = bp * 0.55;
    gp = bp + hra + da;
    tax = gp * 0.12;
    np = gp - tax;
    }
    else if(bp>=30000){
    hra = bp * 0.2;
    da = bp * 0.6;
    gp = bp + hra + gp;
    tax = gp * 0.15;
    np = gp - tax;
    }
        printf("Gross pay is %d\nNet pay is %d\n",gp,np);
    
    return 0;
}