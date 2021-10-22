#include<stdio.h>
int main()
{int size,a[100],i;
printf("Enter the size : ");
scanf("%d",&size);
printf("Enter the elements : ");
for(i=0;i<=size-1;i++)
{scanf("%d",&a[i]);
}
printf("Output : ");
for(i=0;i<=size;i++)
{printf("%d ",a[i]);
}
return 0;
}
