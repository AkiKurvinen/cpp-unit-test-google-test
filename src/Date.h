#pragma once
#ifndef DATE_H
#define DATE_H
class Date
{
public:
	// Constructors
	// initialise to 1/1/1900
	Date();
	// initialise to dd/mm/yy
	Date(int dd, int mm, int yy);
	// member functions
	void print(); // prints date
	void next_day(); // sets date to next day
	// Accessor functions
	int get_day(); // returns day
	int get_month(); // returns month
	int get_year(); // returns year
	int public_leap_year(){
		 return leap_year();
	 }
	 int public_days_between(Date *a_date){
		 return days_between(*a_date);
	 }
private:
	int day;
	int month;
	int year;
	int leap_year(); // returns true if year is a leap
	void next_day(Date date);
	int days_between(Date date);

};
#endif