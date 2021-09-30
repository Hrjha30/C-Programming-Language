// To check whether the entered number is an Armstrong number or not 

#include<stdio.h>
int main()
{int num,remainder,t,sum=0;
printf("Enter the number : ");
scanf("%d",&num);
t=num;
while(num!=0)
{remainder=num%10;
sum=sum+remainder*remainder*remainder;
num=num/10;
}
printf("sum of cube of digits is : %d",sum);
if(t==sum)
printf("\nArmstrong number");
else
printf("\nNot an armstrong number");
return 0;
}
