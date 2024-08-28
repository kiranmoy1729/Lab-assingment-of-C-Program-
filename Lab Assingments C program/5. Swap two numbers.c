#include <stdio.h>
int main(){

int a,b,temp;
printf("enter the first number : ");
scanf("%d", &a);
printf("Enter the second numbert : ");
scanf("%d", &b);

temp=a;
a=b;
b=temp;
 printf("the first swaped value is : %d \n", a);
 printf("the second swaped value is : %d \n", b);

    
    return 0;
}