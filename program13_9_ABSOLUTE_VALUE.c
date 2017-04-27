#include <stdio.h>
// The macro that computes the absolute value of its argument.
// Макрос, который рассчитывает абсолютное значение аргумента.
#define ABSOLUTE_VALUE(x)	(	( (x) < 0 ) ? (-(x)) : (x)	)
int main (void)
{
 int number=0;
 
 number = ABSOLUTE_VALUE(number-4);
 printf ("The absolute value of (number-4) is %i\n", number);
 printf ("Type in your number: ");
 scanf ("%i", &number);
 printf ("The absolute value is %i\n", ABSOLUTE_VALUE(number));
 
 return 0;
}