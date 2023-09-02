#include<stdio.h>
#include<math.h>

int main()
{
    float Ri,Pa,Y,Ci,Si;
    printf("Enter the Rate of interest\n");
    scanf("%f",&Ri);
    printf("Enter the principle amount\n");
    scanf("%f",&Pa);
    printf("Enter Years\n");
    scanf("%f",&Y);

    Ci=Pa*(1+Ri);
    Si=Pa*Ri*Y;

    printf("Compound interest is%f\n Simple interest is%f\n",Ci,Si);


    return 0;
}