// Program shows examples of using of global variables.
// Программа демонстрирует использование глобальных переменных.
#include <stdio.h>
int u;
int main (void)
{
char prime (int u);
int i;

for (i=1; i < 4; ++i) {
printf ("What number do you want to check?\n");
scanf ("%i", &u);
printf ("The number %i: %c\n", u, prime (u));
}

return 0;
}

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