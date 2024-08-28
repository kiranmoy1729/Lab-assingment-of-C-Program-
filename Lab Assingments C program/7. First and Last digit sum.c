#include <stdio.h>
int main(){

int num;
printf("Enter a Five digit number : ");
scanf("%d", &num);

int sum=0, rem;
sum = num % 10;
rem = num/10000;


printf("The first and last digit sum is : %d", sum+rem);

    
    return 0;
}