// Input the elements of an array and display it

#include<stdio.h>
int main()
{int num[10],i;
printf("Enter the numbers : ");
for(i=0;i<=9;i++)
{scanf("%d",&num[i]); // input from the user
}
printf("The numbers are : ");
for(i=0;i<=9;i++)
{printf("%d ",num[i]);
}
return 0;
}
