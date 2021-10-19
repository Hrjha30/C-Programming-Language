#include<stdio.h>
int main()
{float marks;
label : printf("Enter the marks : ");
scanf("%f",&marks);
if(marks<0||marks>100)
{printf("Not a valid marks\n");
goto label;
}
else
{printf("The Entered marks is : %f",marks);
}
return 0;
}
