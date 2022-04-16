#include <iostream>
#include "Date.h"
using namespace std;
// Constructor functions
Date::Date(int dd, int mm, int yy)
{
	day = dd;
	month = mm;

		year = yy;
}
Date::Date()
{
	day = 1;
	month = 1;
	year = 1900;
}
// Accessor functions
int Date::get_day()
{
	return day;
}
int Date::get_month()
{
	return month;
}
int Date::get_year()
{
	return year;
}
int leap_year(int year)
{
	if (year % 400 == 0)
		return 1;
	else if (year % 100 == 0)
		return 0;
	else if (year % 4 == 0)
		return 1;
	else return 0;
}
// Other functions
void Date::print()
{
	cout << day <<'/'
		<< month << '/'
		<< year;
}
void Date::next_day()
{
	int days_in_month;
	day++;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: days_in_month = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: days_in_month = 30;
		break;
	case 2: if (leap_year())
		days_in_month = 29;
		  else days_in_month = 28;
		break;
	}
	if (day > days_in_month)
	{
		day = 1;
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
}
// Private function
int Date::leap_year()
{
	if (year % 400 == 0)
		return 1;
	else if (year % 100 == 0)
		return 0;
	else if (year % 4 == 0)
		return 1;
	else return 0;
}
void Date::next_day(Date date)
{
	int days_in_month;
	day = date.day;
	month = date.month;
	year = date.year;
	day++;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: days_in_month = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: days_in_month = 30;
		break;
	case 2: if (leap_year())
		days_in_month = 29;
		  else days_in_month = 28;
		break;
	}

		if (day > days_in_month)
		{
			day = 1;
			month++;
			if (month > 12)
			{
				month = 1;
				year++;
			}
		}
}
	int countLeapYears(Date date){
    int years = date.get_year();

    if (date.get_month() <= 2)
        years--;

    return years / 4
           - years / 100
           + years / 400;
};
int Date::days_between(Date date)
{
const int monthDays[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };
    Date dt1 = { day, month, year };
    Date dt2 = {  date.day, date.month, date.year  };

    // initialize count using years and day
    long int n1 = dt1.year * 365 + dt1.day;

    // Add days for months in given date
    for (int i = 0; i < dt1.month - 1; i++)
        n1 += monthDays[i];

    // Since every leap year is of 366 days,
    // Add a day for every leap year
    n1 += countLeapYears(dt1);

    // SIMILARLY, COUNT TOTAL NUMBER OF
    // DAYS BEFORE 'dt2'

    long int n2 = dt2.year * 365 + dt2.day;
    for (int i = 0; i < dt2.month - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(dt2);

    // return difference between two counts
    return (n2 - n1);

}

Date week_later(Date date)
// This function returns the date a week
// later than date.
{
	Date temp;
	int days_in_month;
	int day, month, year;
	day = date.get_day();
	month = date.get_month();
	year = date.get_year();
	day += 7;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: days_in_month = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: days_in_month = 30;
		break;
	case 2: if (leap_year(year))
		days_in_month = 29;
		  else days_in_month = 28;
		break;
	}
	if (day > days_in_month)
	{
		day = day - days_in_month;
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
	temp = Date(day, month, year);
	return temp;
}