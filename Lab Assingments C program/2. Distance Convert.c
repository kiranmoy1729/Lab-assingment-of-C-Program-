#include <stdio.h>
int main(){


float km, meter, feet, inches, centimeters;

printf("Enter Kilometer : ");
scanf("%f", &km);

meter= km*1000;
feet= km*3280.84;
inches= km*39370.08;
centimeters= km* 1000 *100;

printf("The Distance in Feet  : %f\n", feet);
printf("The Distance in Meter  : %f\n", meter);
printf("The Distance in Inches  : %f\n", inches);
printf("The Distance in Centimeters : %f\n", centimeters);


    return 0;
}