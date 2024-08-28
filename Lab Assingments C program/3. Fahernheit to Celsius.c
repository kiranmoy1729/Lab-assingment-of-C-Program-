#include <stdio.h>
int main(){

float centigrade,fahenheit;

printf("Enter the temperature: \n");
scanf("%f", & fahenheit );
centigrade = (fahenheit-32)*5.0/9.0;

printf("Centigrade is %f", centigrade);





    return 0;
}