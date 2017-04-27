// Program shows example using of array. Elements of the array values inintially equal to zero.
// Программа демонстрирует пример работы с массивом.

#include <stdio.h>
int main (void)
{
	int values[10];
	int i;

	for (i = 0; i < 10; ++i)
		values[i] = 0;
	for ( i = 0; i < 10; ++i )
		printf ("values[%i] = %i\n", i, values[i]);

return 0;
}
