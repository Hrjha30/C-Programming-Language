// Swap two numbers using 2 variables

#include<stdio.h>
int main()
{int a,b;
printf("Enter the value of a and b : ");
scanf("%d%d",&a,&b);
a=a+b;                      /*a=5,b=4*/ //a=9
b=a-b;                      //b=5
a=a-b;
printf("\nAfter swapping");                      // a=4
printf("\na=%d and b=%d",a,b);
return 0;}
