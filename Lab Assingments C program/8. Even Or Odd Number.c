#include <stdio.h>
int main(){

// WITH TERNARY OPERATOR.......
int num;
printf("Enter a Number :");
scanf("%d", &num);

// num %2 ==0 ? printf("Even Number  \n") : printf("Odd Number \n"); 

// WITH IF-ELSE OPERATOR..............

if(num%2==0){
    printf("Even number : ");
}  else {
    printf("Odd Number");
}

    
    return 0;
}