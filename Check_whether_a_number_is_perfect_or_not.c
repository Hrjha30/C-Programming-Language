//perfect number 

#include<stdio.h>
int main()
{int num,sum=0,t,i;
printf("Enter the number : ");
scanf("%d",&num);
t=num;
for(i=1;i<num;i++)
{if(num%i==0)
sum=sum+i;}
if(t==sum)
{printf("%d is a perfect number",t);
}
else
{printf("%d is not a perfect number",t);
}
return 0;
}
