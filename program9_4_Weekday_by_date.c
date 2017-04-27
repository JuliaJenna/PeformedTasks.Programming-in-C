// Program displays the day of the week on which a particular date falls.
// Программа определяет день недели по дате.
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
struct weekday
{
	int a;
	char name[3];
};
const struct weekday weekdays[7] =
	{ {0, {'S', 'u', 'n'} }, {1, { 'M', 'o', 'n'} }, {2, { 'T', 'u', 'e'} }, {3, { 'W', 'e', 'd'} }, {4, { 'T', 'h', 'u'} }, {5, { 'F', 'r', 'i'} }, {6, { 'S', 'a', 't'} } };

int main (void)
{
int daysNumber (struct date datte);
struct date day = {0,0,0};
int N, a, i;

printf ("Enter the date (d/m/yyyy):");
scanf ("%i/%i/%i", &day.day, &day.month, &day.year);
N = daysNumber (day);
a = ( N - 621049 ) % 7;
printf ("%i/%i/%i is ", day.day, day.month, day.year);
for ( i = 0; i < 3; ++i)
printf ("%c", weekdays[a].name[i]);
printf ("\n");

return 0;
}