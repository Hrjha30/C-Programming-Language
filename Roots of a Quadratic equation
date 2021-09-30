// Roots of a quadratic equation 

#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,det,root1,root2,real,imag;
printf("Enter the values of a, b and c : ");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
printf("a cannot be 0, run the program again");
exit(0);}
det=b*b-4*a*c;
if(det>0)
{
printf("Roots are real and distict");
root1=(-b+sqrt(det))/(2*a);
root2=(-b-sqrt(det))/(2*a);
printf("\nRoot1 is : %.2f",root1);
printf("\nRoot2 is : %.2f",root2);}

if(det==0)
{printf("Roots are real and equal");
root1=(-b+sqrt(det))/(2*a);
root2=root1;
printf("\nRoot1 is : %.2f",root1);
printf("\nRoot2 is : %.2f",root2);}

if(det<0)
{printf("Roots are imaginary");
real=(-b)/(2*a);
imag= sqrt(-det)/(2*a);

printf("\nRoot1 is : %f+%fi",real,imag);
printf("\nRoot2 is : %f-%fi",real,imag);}
return 0;
}
