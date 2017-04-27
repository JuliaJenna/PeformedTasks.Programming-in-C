// Программа расчета завтрашней даты с использованием составных литералов.
// Program to calculate tomorrow's date – using compound literals.

#include <stdio.h>
#include <stdbool.h>
	struct date
	{
		int day;
		int month;
		int year;
	};
// Function calculates tomorrow's date - and uses compound literals.
// Функция расчитывает завтрашнюю дату и использует составные литералы.
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

if (today.day != numberOfDays(today) ) 
	tomorrow = (struct date) {today.day + 1, today.month, today.year};
else if (today.month == 12) // End of year.		Конец года.
	tomorrow = (struct date) {1, 1, today.year + 1};
else  						// End of month.	Конец месяца.
	tomorrow = (struct date) {1, today.month + 1, today.year};
return tomorrow;
}
// Function finds the number of days in a month.
// Функция определяет количество дней в месяце.
int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31 };
	if (isLeapYear(d) && d.month == 2)
	days = 29;
	else
	days = daysPerMonth[d.month - 1];
	return days;
}
// Function determines if it's a leap year.
// Функция определения високосного года.
	bool isLeapYear (struct date d)
	{
		bool leapYearFlag;
		if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
			leapYearFlag = true; // Leap year.		Високосный год.	
		else
			leapYearFlag = false; // Not leap year.	Обычный год.
			
		return leapYearFlag;
	}
	
int main (void)
{
struct date dateUpdate (struct date today);
struct date thisDay, nextDay;

printf ("Enter today's date (dd mm yyyy): ");
scanf ("%i%i%i", &thisDay.day, &thisDay.month, &thisDay.year);
nextDay = dateUpdate(thisDay);
printf ("Tomorrow's date is %i/%i/%.2i.\n", nextDay.day, nextDay.month, nextDay.year % 100 );

return 0;
}