// Program demonstrates an example of an array of counters.
// Программа демонстрирует пример использования массива счётчиков.
#include <stdio.h>
int main (void)
{
int ratingCounters[11], i, response;

for ( i = 1; i <= 10; ++i )
	ratingCounters[i] = 0;
printf ("Enter your responses\n");
for ( i = 1; i <= 20; ++i ) {
	scanf ("%i", &response);
	if ((response < 1 || response > 10) && response != 999 )
		printf ("Bad response: %i\n", response);
	else if (response == 999 )
	break;
	else
		++ratingCounters[response];
	}
	
	printf ("\n\n Rating Number of Responses\n");
	printf ("-------------------------------\n");
	for ( i = 1; i <= 10; ++i )
	printf ("%4i%14i\n", i, ratingCounters[i]);

	return 0;
}
