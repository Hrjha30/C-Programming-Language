#include<stdio.h>
int factorial(int);
int main()
{ int num,f;
printf("Enter the number : ");
scanf("%d",&num);
f=factorial(num);
printf("factorial is : %d",f);
return 0;}
int factorial(int n)
{if(n>1)
return n*factorial(n-1);
else
return 1;
}
