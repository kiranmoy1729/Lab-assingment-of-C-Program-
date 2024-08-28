#include <stdio.h>

int main (){


float l,b,r;
printf("Enter the lenth : ");
scanf("%f", & l);
printf("Enter the breadth :");
scanf("%f", & b);
printf("Enter the radius : ");
scanf("%f", &r);

float ra,p,ca,ci;

ra = l*b;
printf("Rectangle area is : %f \n", ra);
p = 2*(l+b);
printf("Rectangle periemter is : %f\n",p);
ca = 3.14*r*r;
printf("Circle area is : %f\n",ca);
ci = 2*3.14*r;
printf("Circle circumference is : %f\n",ci);
return 0;

}
    



