#include<stdio.h>
int main()
{int a[10],i;
printf("Enter the elements : ");
for(i=0;i<10;i++)
{ scanf("%d",&a[i]);
}
printf("In reverse order : ");
for(i=9;i>=0;i--)
{printf("%d ",a[i]);
}
return 0;
}
