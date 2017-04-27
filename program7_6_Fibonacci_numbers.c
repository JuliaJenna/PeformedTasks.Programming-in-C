// Program generates first 15 Fibonacci numbers.
// Программа генерирует первые 15 чисел Фибоначчи.
#include <stdio.h>
int main (void)
{
int one,two, three, i;
one = 0; // By definition. По определению.
two = 1; // Ditto. Так же.

printf ("%i\n", one);
printf ("%i\n", two);

for ( i = 1; i < 14; ++i ) {
	three =  one +  two;
	printf ("%i\n", three);
	one = two;
	two = three;
	}
return 0;
}
