// The program program tests the macro definition of MIN that gives the minimum of two values.
// ѕрограмма тестирует макрос MIN, который определ€ет наименьшее из двух значений.

#define MIN(a,b) ( ((a)<(b)) ? (a) : (b) )
#include <stdio.h>

int main (void)
{
 int limit;
 
 limit = MIN(5, 9);
 printf("%i\n", limit);
 limit = MIN(5+10, 9);
 printf("%i\n", limit);
 limit = MIN(5+4, 9);
 printf("%i\n", limit);
 limit = MIN(5, 9)*100;
 printf("%i\n", limit);
 limit = MIN(1&2, 9);
 printf("%i\n", limit);
 return 0;
}