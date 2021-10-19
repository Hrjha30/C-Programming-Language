// Sum of N Natural Numbers

#include<stdio.h>
int main()
{int N,sum=0,i=1;
printf("Enter the number : ");
scanf("%d",&N);
while(i<=N)
{sum=sum+i;
i++;
}
printf("Sum is : %d ",sum);
return 0;
}
