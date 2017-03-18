#include <stdio.h>
#include <math.h>
#include<string.h>//include string.h to use strcpy
//avoid using the count as it is reserved in c

main()
{
    int ref_year, ref_dayno, ref_month, year, dayno, month, days_per_month, days;
    int counter = 0;
    long int temp;
    char day[12];
    char month_name[12];
    char month_final[12];

    ref_year = 2017;
    ref_dayno = 16;
    ref_month = 1;

    printf ("Enter date in ddmmyyyy format to know what day it was.\n");
    scanf ("%d", &temp);

    year = temp%10000;
    temp /= 10000;
    month = temp%100;
    temp /= 100;
    dayno = temp;

    temp = (fabs)(ref_year-year);
    days = (temp/4)*366+365*(temp-(temp/4));

    do
    {
        switch (month)
        {
            case 1: days_per_month = 31;
                    strcpy(month_name, "January");
                break;
            case 2: strcpy (month_name, "February");
                {if ((year%4) == 0)
                {
                    if(year%100==0)
                    {
                        if(year%400==0)
                        days_per_month = 29;
                        else
                        days_per_month = 28;
                    }
                    else
                    days_per_month = 29;
                }
                    days_per_month = 29;
                if(year%4!=0)
                    days_per_month = 28;
                break;}
            case 3 : days_per_month = 31;
                     strcpy(month_name, "March");
                 break;
            case 4 : days_per_month = 30;
                     strcpy(month_name, "April");
                 break;
            case 5 : days_per_month = 31;
                 strcpy(month_name, "May");
                 break;
            case 6 : days_per_month = 30;
                 strcpy(month_name, "June");
                 break;
            case 7 : days_per_month = 31;
                 strcpy(month_name, "July");
                 break;
            case 8 : days_per_month = 31;
                 strcpy(month_name, "August");
                 break;
            case 9 : days_per_month = 30;
                 strcpy(month_name, "September");
                 break;
            case 10 : days_per_month = 31;
                  strcpy(month_name, "October");
                  break;
            case 11 : days_per_month = 30;
                  strcpy(month_name, "November");
                  break;
            case 12 : days_per_month = 31;
                  strcpy(month_name, "December");
                  break;
            default : printf ("Please enter a valid month.");
       }

		if (counter)
		{
			if (month == ref_month)
                days += (days_per_month - ref_dayno);
            else
                days += days_per_month;
		}

        else
        {
            if (month == ref_month)
	           days += (dayno - ref_dayno);
	       else
	           days += dayno;
		  strcpy(month_final, month_name);
	   }
		counter++;
	   printf ("%d\n", counter);


    }while ((month--) > ref_month);

	switch (days%7)
    {
        case 0: strcpy(day, "Monday");
        break;
        case 1: strcpy(day, "Tuesday");
        break;
        case 2: strcpy(day, "Wednesday");
        break;
        case 3: strcpy(day, "Thursday");
        break;
        case 4: strcpy(day, "Friday");
        break;
        case 5: strcpy(day, "Saturday");
        break;
        case 6: strcpy(day, "Sunday");
    }
    printf ("Day of %d %s %d is %s.\n", dayno, month_final, year, day);

    return 0;
}
