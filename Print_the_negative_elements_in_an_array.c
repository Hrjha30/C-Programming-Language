// program to print all negative elements in an array
#include<stdio.h>
int main()
{int a[10],i;
printf("Enter the elements : ");
for(i=0;i<10;i++)
{scanf("%d",&a[i]);
}
printf("Negative elements are : ");
for(i=0;i<10;i++)
{if(a[i]<0)
printf("%d\t",a[i]);
}
return 0;
}
