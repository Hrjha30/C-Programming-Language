// Reverse of a number

#include<stdio.h>
int main()
{int num,rev=0,remainder,t;
printf("Enter the number : ");
scanf("%d",&num);
t=num;
while(num!=0)
{remainder=num%10;
rev=rev*10+remainder;
num=num/10;
}
printf("Reverse of the number %d is : %d",t,rev);
return 0;
}
