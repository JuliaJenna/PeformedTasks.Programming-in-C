// Program computes the following day date (and uses pointers). 
// Программа определения завтрашней даты с использованием указателей

#include <stdio.h>
#include <stdbool.h>
	struct date
	{
		int day;
		int month;
		int year;
	};
// Function takes a pointer to a date structure as its argument and updates the structure to the following day.
// Функция расчета завтрашней даты. Принимает указатель на структуру date и обновляет структуру так, чтобы она указывала на следующий день.
void dateUpdate (struct date *today)
{
	int numberOfDays (struct date d);

if ((*today).day != numberOfDays(*today) ) 
	(*today).day++;
else if ((*today).month == 12) { // End of year. Конец года.
	(*today).day = 1;
	(*today).month = 1;
	(*today).year++;
	}
else  {						// End of month. Конец месяца.
	(*today).day = 1;
	(*today).month++;
	}
}

// Function to find the number of days in a month.
// Функция для определения количества дней в месяце.
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
// Function to determine if it's a leap year
// Функция для определения високосного года
	bool isLeapYear (struct date d)
	{
		bool leapYearFlag;
		if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
			leapYearFlag = true; // Високосный год.	
		else
			leapYearFlag = false; // Обычный год.
			
		return leapYearFlag;
	}
	
int main (void)
{
void dateUpdate (struct date *today);
struct date thisDay, nextDay;

printf ("Enter today's date (dd mm yyyy): ");
scanf ("%i%i%i", &thisDay.day, &thisDay.month, &thisDay.year);
dateUpdate(&thisDay);
printf ("Tomorrow's date is %i/%i/%.2i.\n",  thisDay.day, thisDay.month, thisDay.year % 100 );

return 0;
}