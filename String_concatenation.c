#include<stdio.h>
#include<string.h>
int main()
{char str1[20],str2[20];
int i,j;
printf("Enter the word : ");
scanf("%s",&str1);
printf("Enter the word to concatenate with the above word : ");
scanf("%s",&str2);
strcat(str1,str2);
printf("After concatenation : %s",str1);
return 0;
}
