// To find the sum of first and last digit of a number

#include<stdio.h>
int main()
{int num,t,sum;
printf("Enter the number : ");
scanf("%d",&num);
t=num;
t=num%10;
printf("Last digit is : %d",t);
while(num>10)
{num=num/10;
}
printf("\nFirst digit is : %d",num);
sum=t+num;
printf("\nSum is : %d",sum);
return 0;}
