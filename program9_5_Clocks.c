// Program implements clocks.
// ��������� ��������� ����.
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int day;
	int month;
	int year;
};
struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};
// Function for updating of time by second
// ������� ��� ������������� ���������� �������.
struct time timeUpdate (struct time now)
{
	++now.seconds;
	if (now.seconds == 60 ) { // Next minute.		��������� ������.
	now.seconds = 0;
	++now.minutes;
		if (now.minutes == 60 ) { // Next hour.		��������� ���.
			now.minutes = 0;
			++now.hour;
			if (now.hour == 24 ) 	// Midnight.	�������.
				now.hour = 0;
		}
	}
return now;
}
// Function finds the number of days in a month.
// ������� ���������� ���������� ���� � ������.
int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31 };
	if (isLeapYear (d) && d.month == 2)
	days = 29;
	else
	days = daysPerMonth[d.month - 1];

	return days;
}
// Function determines if it's a leap year.
// ������� ����������� ����������� ����.
bool isLeapYear (struct date d)
	{
		bool leapYearFlag;
		if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 	400 == 0 )
			leapYearFlag = true; // Leap year.	���������� ���.	
		else
			leapYearFlag = false; // Not leap year.	������� ���.
			
		return leapYearFlag;
	}
// Function calculates tomorrow's date.
// ������� ������� ���������� ����.
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

if (today.day != numberOfDays(today) ) {
	tomorrow.day = today.day + 1;
	tomorrow.month = today.month;
	tomorrow.year = today.year;
}
else if (today.month == 12) { // End of year.	����� ����.
	tomorrow.day = 1;
	tomorrow.month = 1;
	tomorrow.year = today.year + 1;
}
else { 						// End of month.	����� ������.
	tomorrow.day = 1;
	tomorrow.month = today.month + 1;
	tomorrow.year = today.year;
	}
return tomorrow;
}
// Function "Clocks"
// ������� "����"
	struct dateAndTime clockKeeper (struct dateAndTime E)
{
struct dateAndTime resultEvent;

resultEvent.stime = timeUpdate (E.stime);
if ( (E.stime.hour == 0) && (E.stime.minutes == 0) && (E.stime.seconds == 0) ) // Midnight is crossed.	������� ��������.
resultEvent.sdate = dateUpdate (E.sdate);

return resultEvent;
}

int main (void)
{
struct dateAndTime event, newevent;
struct dateAndTime clockKeeper (struct dateAndTime event);

printf ("Enter the date(dd/mm/yy):\n");
scanf ("%i/%i/%i", &event.sdate.day, &event.sdate.month, &event.sdate.year);
printf ("Enter the time: (hh:mm:ss)\n");
scanf ("%i:%i:%i\n", &event.stime.hour, &event.stime.minutes, &event.stime.seconds);
newevent = clockKeeper(event);
printf ("Date is:%i/%i/%i. Time is:%i:%i:%i\n", newevent.sdate.day, newevent.sdate.month, newevent.sdate.year, newevent.stime.hour, newevent.stime.minutes, newevent.stime.seconds);

return 0;
}