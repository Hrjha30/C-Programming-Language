// C program to find power of a number using pow(inbuilt) function

#include<stdio.h>
#include<math.h>
int main()
{float num1,num2,power;
printf("Enter the number : ");
scanf("%f",&num1);
printf("Enter the power :");
scanf("%f",&num2);
power=pow(num1,num2);
printf("%f raise to power %f (%f^%f) is : %f",num1,num2,num1,num2,power);
return 0;
}
