#include<stdio.h>
int main()
{char str1[]="HELLO";  
char str2[]={'H','E','L','L','O','\0'};
char str3[6];
str3[0]='H';
str3[1]='E';
str3[2]='L';
str3[3]='L';
str3[4]='O';
str3[5]='\0';
printf("str1 = %s and size = %d",str1,sizeof(str1));  //size will be same for all = 6 bytes here
printf("\nstr2 = %s and size = %d" ,str2,sizeof(str2));
printf("\nstr3 = %s and size = %d",str3,sizeof(str3));
return 0;
}
