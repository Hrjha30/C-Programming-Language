// Area of equilateral triangle

#include<stdio.h>
#include<math.h>
int main()
{float s,area;
printf("Enter the side of the equilateral triangle : ");
scanf("%f",&s);
area=(sqrt(3)/4)*pow(s,2);
printf("Area is : %.1f",area);
return 0;
}
