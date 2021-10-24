#include<stdio.h>
int main()
{int a[10],b[10],i;
printf("Enter the elements : ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("Elements after copying : ");
for(i=0;i<10;i++)
{b[i]=a[i];
printf("%d\t",b[i]);
}


return 0;
}
