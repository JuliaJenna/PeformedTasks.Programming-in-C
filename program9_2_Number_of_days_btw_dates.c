// Program calculates the number of elapsed days between two dates.
// Программа расчитывает количество дней между двумя датами.
#include <stdio.h>
struct date
{
	int day;
	int month;
	int year;
};

int f (int year, int month)
{
if (month < 3)
year = year - 1;
return year;
}
int g (int month)
{
if (month < 3)
month = month + 13;
else
month = month + 1;
return month;
}
int daysNumber (struct date datte)
{
int N;
int f (int year, int month);
int g (int month);

if ( (datte.month < 1) || (datte.day < 1) )
	printf ("Incorrect month or day");
	else {
		if ( (datte.year < 1700 ) || (( datte.year == 1700 ) && (datte.month < 3)) )
			printf ("Incorrect date\n");
		else {
			N = 1461 * f(datte.year, datte.month)/4 + 153 * g(datte.month)/5 + datte.day;
			if ( (( datte.year == 1700) && (datte.month>2)) || (( datte.year>1700 ) && ( datte.year<1800 )) || (( datte.year == 1800) && (datte.month<3)) )
				N = N + 2;
			else if ( (( datte.year == 1800) && (datte.month>2)) || (( datte.year>1800 ) && ( datte.year<1900 )) || (( datte.year == 1900) && (datte.month<3)) )
				N = N + 1;
			}
		}
return N;
}
int main (void)
{
int daysNumber (struct date datte);
struct date day = {0,0,0};
int N1 = 0;
int N2 = 0;
int N = 0;

printf ("Enter the first date (dd/mm/yy):");
scanf ("%i/%i/%i", &day.day, &day.month, &day.year);
N1 = daysNumber (day);
printf ("Enter the second date (dd/mm/yy):");
scanf ("%i/%i/%i", &day.day, &day.month, &day.year);
N2 = daysNumber (day);
// Number of elapsed days
// Число дней между дат
N = N2 - N1;
printf ("Number of days between dates: %i", N);
return 0;
}