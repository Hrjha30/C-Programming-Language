// C program to enter and display 1-D array

#include<stdio.h>
int main()
{int i,a[3];
printf("Enter the Elements : ");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}printf("\nThe entered elements are : ");
for(i=0;i<=2;i++)
{printf("%d ",a[i]);
}
return 0;
}
