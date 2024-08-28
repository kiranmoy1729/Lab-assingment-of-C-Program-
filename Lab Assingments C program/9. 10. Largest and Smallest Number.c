#include <stdio.h>
int main(){

int num1,num2;
printf("enter the first number : ");
scanf("%d", &num1);
printf("enter the second number : ");
scanf("%d", &num2);

if (num1>num2){
    printf("First number is the largest Number");
}  else if (num2>num1){
    printf("Second Number is the largest number");
}

    return 0;
}