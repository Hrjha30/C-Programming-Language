#include<stdio.h>
#include<string.h>
int main()
{char str1[20],str2[20];
int d;
printf("Enter the string 1 : ");
scanf("%s",&str1);
printf("Enter the string 2 : ");
scanf("%s",&str2);
d=strcmp(str1,str2);
printf("d = %d",d);
if(d==0)
{printf("\nStrings are same");
}
if(d>0)
{printf("\nString 1 is greater than string 2");
}
if(d<0)
{printf("\nString 1 is smaller than string 2");
}
return 0;
}
