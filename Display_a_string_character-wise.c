#include<stdio.h>
int main()
{char str[20];
int i=0;
printf("Enter the string : ");
scanf("%s",&str);
while(str[i]!='\0')
{printf("%c",str[i]);
i++;
}
return 0;
}
