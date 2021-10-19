#include<stdio.h>
int main()
{
int i,j,a[3][3],b[3][3],c[3][3];
printf("Enter the elements of matrix 1 : ");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{scanf("%d",&a[i][j]);
	}
	printf("\n");
}

printf("\nEnter the elements of matrix 2 : ");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{scanf("%d",&b[i][j]);
	}
	printf("\n");
}
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n");
}
printf("\nSum of matrix 1 and 2 is : ");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{printf("%d ",c[i][j]);
	}
	printf("\n");
}
return 0;
}
