#include<stdio.h>
int main()
{
float radius, area,perimeter;
printf("Enter the radius : ");
scanf("%f",&radius);
area=3.14*radius*radius;
perimeter=2*3.14*radius;
printf("Area is : %f",area);
printf("\nPerimeter is : %f",perimeter);
return 0;
}
