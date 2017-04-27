#include <stdio.h>
// Program calculates the sum of the elements in the array.
// Программа рассчитывает сумму элементов массива.
int arraySum ( int array[], int n )
{
int i, sum;

for (i = 0, sum = 0; i < n; ++i) 
	 sum = sum + array[i];

	 return sum;
}
int main (void)
{
int samplearray[] = {1,2,3};
int arraySum ( int array[], int n );

printf ("Array[1,2,3]: %i", arraySum(samplearray, 3));

return 0;
}
