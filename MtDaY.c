/*
File name: MtDaY
Created by: Alice Vang
Date: March 1, 2021

Description: This a simple C program that converts minutes to days
             and years using arithmetic operations. 
*/

#include<stdio.h>
int main(void){

    double minutes, days, years,          //initialize variables
           mins_per_day, days_per_year;

        mins_per_day = 1440;              //1440 minutes per day
        days_per_year = 365;              //365 days in a year

        //output asks for number of minutes
        printf("Please Enter numbers of minutes:");
        scanf("%lf",&minutes);

        days = minutes / mins_per_day;    //minutes divided by minutes per day to get number of days
        years = days / days_per_year;     //days divided by days per year to get number of years

        //print number of years and days within given minutes
        printf("There are %.3lf days in %.2lf minutes.\n", days, minutes);
        printf("There are %.3lf years in %.2lf minutes.\n", years, minutes);

}
