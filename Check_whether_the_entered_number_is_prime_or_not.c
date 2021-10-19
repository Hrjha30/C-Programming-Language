#include<stdio.h>
int main()
{int num,i;
printf("Enter the number : ");
scanf("%d",&num);
for(i=2;i<num;i++)
{if(num%i==0)
{
printf("\n%d is not a prime number ",num);
break;}
}
if(i==num)
{printf("\n%d is a prime number",num);
}
return 0;
}
