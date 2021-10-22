// C program to print the sum of elements of an array
#include<stdio.h>
int main()
{int a[5],sum=0,i;
printf("Enter the elements : ");
for(i=0;i<5;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{sum=sum+a[i];
}
printf("Sum is : %d",sum);
return 0;
}
