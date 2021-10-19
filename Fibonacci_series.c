//Fibonacci series : 0 1 1 2 3 5 8 13 21 34 ...

#include<stdio.h>
int main()
{int a=0,b=1,c=0,terms,i;
printf("Enter the terms : ");
scanf("%d",&terms);
for(i=1;i<=terms;i++)
{
printf("%d ",c);
a=b;
b=c;
c=a+b;

}
return 0;
}
