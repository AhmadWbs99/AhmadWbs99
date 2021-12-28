#include<stdio.h>

int main (){

int Number1 , Number2 , sum , subtraction , multi ;
double div;
printf("Enter the Number1 : ");
scanf("%d",&Number1);
 printf("Enter the Number2 :");
 scanf("%d",&Number2);

sum = Number1+Number2;
printf("the total is : %d\n ",sum);

subtraction = Number1-Number2;
printf("The subtraction of the two values is : %d\n",subtraction);

multi = Number1 * Number2;
printf("The multiplication result is : %d\n",multi);

div = Number1/Number2;
printf("The division result is: %f\n", div);


return 0;
}