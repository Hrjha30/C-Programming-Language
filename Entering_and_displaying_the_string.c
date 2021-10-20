#include<stdio.h>
#include<string.h>
int main()
{char str[20];
printf("Enter the word : "); 
scanf("%s",&str);
printf("\nName = %s",str); // will print only the first word until the space is given
return 0;
}
