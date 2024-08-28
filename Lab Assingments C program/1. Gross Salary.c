#include <stdio.h>
int main(){


float basic, da, hra, gs;
printf("Enter the basic salary : \n");
scanf("%f", & basic);

da= 0.40*basic;
hra= 0.20*basic;
gs= basic+da+hra;
printf("The Gross salary is : %f", gs);


    return 0;
}