// Program shows examples of using of global variables.
// Программа демонстрирует использование глобальных переменных.
#include <stdio.h>
int n;
int array[] = {1,2,3};

int arraySum ( int array[], int n )
{
int i, sum;

for (i = 0, sum = 0; i < n; ++i) 
	 sum = sum + array[i];

	 return sum;
}

int main (void)
{
int arraySum ( int array[], int n );
n = 3;

printf ("Array[1,2,3]: %i", arraySum(array, n));

return 0;
}
