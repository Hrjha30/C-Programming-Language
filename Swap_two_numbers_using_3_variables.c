// Swap two numbers using 3 variables

#include<stdio.h>
int main()
{ int a,b,t;
printf("Enter the value of a and b :");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("a=%d and b=%d",a,b);
return 0;
}
