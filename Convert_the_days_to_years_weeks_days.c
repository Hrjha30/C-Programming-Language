// Convert the inputdays to years, weeks, days

#include<stdio.h>
#include<math.h>
int main()
{int year, week,days,inputdays;
printf("Enter the number of days : "); 
scanf("%d",&inputdays);
if(inputdays>365)
{year=inputdays/365;  // considering the number of days to be 365 in an year 
week=((inputdays-365)/7);
days=(inputdays-365)%7;
printf("Year/s : %d\tWeek/s : %d\tDay/s : %d",year,week,days);
}
if(inputdays<365)
{year=inputdays/365;
week=inputdays/7;
days=inputdays%7;
printf("Year/s : %d\tWeek/s : %d\tDay/s : %d",year,week,days);
}
return 0;
}
