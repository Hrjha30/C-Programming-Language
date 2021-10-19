/*   A
    B B
   C C C
  D D D D
 E E E E E   */
 
 #include<stdio.h>
int main()
{char ch='A';
int i,j,row,k;
printf("\nEnter the number of Rows : ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{for(j=1;j<=row-i;j++)
printf(" ");
for(k=1;k<=i;k++)
printf(" %c",ch+i-1);
printf("\n");}
return 0;
}
