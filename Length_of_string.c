#include<stdio.h>
#include<string.h>
int main()
{char str[50];
int len;
printf("Enter the word : ");
gets(str);
len=strlen(str);
printf("Length of %s is : %d",str,len);
return 0;
}
