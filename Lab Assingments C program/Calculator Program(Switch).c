#include <stdio.h>

int main (){

float num1 , num2;
char ch;
printf("Enter the first number :  ");
scanf("%f", &num1);
printf("Enter the operation : ");
scanf(" %c", &ch);
printf("Enter the second number :");
scanf("%f", &num2);

float result;
switch (ch){
    case '+': result= num1+num2;
    printf("%f", result);
break;
case '-': result= num1-num2;
printf("%f", result);
break;
case '*': result= num1*num2;
printf("%f", result);
break;
case '/': result= num1/num2;
printf("%f", result);
break;
default : printf("Wrong Input");
}

return 0;

}
    



