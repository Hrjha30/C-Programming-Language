 //C program to check whether triangle is equilateral, scalene or isosceles

#include<stdio.h>
int main()
{float side1,side2,side3;
printf("Side 1 : ");
scanf("%f",&side1);
printf("Side 2 : ");
scanf("%f",&side2);
printf("Side 3 : ");
scanf("%f",&side3);
if(side1==side2&&side2==side3)
printf("Triangle is Equilateral");
else if(side1==side2||side2==side3||side3==side1)
printf("Triangle is Isosceles");
else
printf("Triangle is Scalene");
return 0;
}
