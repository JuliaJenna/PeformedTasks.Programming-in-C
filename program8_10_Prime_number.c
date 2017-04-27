#include <stdio.h>
// Function tests the integer value if it's a prime number.
// Функция определяет, является ли число простым.
char prime (int u)
{
int i;
char result = 'p';

if ( ( u == 1 ) || ( u % 2 == 0 ) )
result = 'n';

if ( u > 2) {
	for (i = 3; i < u ; i = i+2) {
	if ( u % i == 0 )
	result = 'n';
		}
	}
return result;
}
int main (void)
{
char prime (int u);
int i, number;

for (i=1; i < 4; ++i) {
printf ("What number do you want to check?\n");
scanf ("%i", &number);
printf ("The number %i: %c\n", number, prime (number));
}

return 0;
}