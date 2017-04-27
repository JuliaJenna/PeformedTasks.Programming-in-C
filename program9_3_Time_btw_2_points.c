// Program calculates the elapsed time (in hours, minutes, and seconds) between the two times.
// Программа рассчитывает разницу между двумя моментами времени в часах, минутах и секундах.
#include <stdio.h>
struct time
{
	int hours;
	int minutes;
	int seconds;
	};
struct time elapsed_time (struct time time1, struct time time2)
{
struct time timedif = {0,0,0};
int Nsec1, Nsec2, Nsec, k;

if ( ( time1.hours<0 ) || ( time1.hours> 24) || ( time2.hours<0 ) || ( time2.hours> 24) || ( time1.minutes<0 ) || ( time1.minutes> 60) || ( time2.minutes<0 ) || ( time2.minutes> 60) || ( time1.seconds<0 ) || ( time1.seconds> 60) || ( time2.seconds<0 ) || ( time2.seconds> 60) )
	printf ("Incorrect time");
else	{
	Nsec1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
	Nsec2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
	if (Nsec1 < Nsec2) 
		Nsec = Nsec2 - Nsec1;
	else 
		Nsec = 86400 - Nsec1 + Nsec2;
	// transform number of seconds in format 'hh:mm:ss'
	// переводим число секунд в формат чч:мм:сс
	timedif.hours = Nsec / 3600;
	k = Nsec % 3600;
	timedif.minutes = k / 60;
	timedif.seconds = k % 60;
	}
return timedif;
}
int main (void)
{
struct time time1, time2, difference = {0,0,0};
struct time elapsed_time (struct time time1, struct time time2);

printf ("Enter the first time point (hh:mm:ss): ");
scanf ("%i:%i:%i", &time1.hours, &time1.minutes, &time1.seconds);
printf ("Enter the second time point (hh:mm:ss): ");
scanf ("%i:%i:%i", &time2.hours, &time2.minutes, &time2.seconds);
difference = elapsed_time (time1,time2);
printf ("The difference equals: %ih:%im:%is", difference.hours, difference.minutes, difference.seconds);

return 0;
}