//Binary to Decimal conversions

#include<stdio.h>
#include<math.h>
int main()
{ int num,i,remainder,sum=0;
printf("Enter the Binary number : ");
scanf("%d",&num);
for(i=0;num!=0;i++)
{remainder=num%10;
sum=sum+remainder*pow(2,i);
num=num/10;}
printf("Decimal Equivalent is : %d",sum);
return 0;
}
