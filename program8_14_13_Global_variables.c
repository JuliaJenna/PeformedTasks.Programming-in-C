// Program shows examples of using of global variables.
// ѕрограмма демонстрирует использование глобальных переменных.
#include <stdio.h>
#include <stdbool.h>
int n = 16;
bool order = 1;
int	array[16] = { 35, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

int main (void)
{
	int i;
	void sort (void);
	
	printf ("The array before the sort: \n");
	for ( i = 0; i < 16; ++i)
	 printf ( "%i ", array[i]);
	 sort ();
	 printf ("\n\nThe array after the sort: \n");
	 for ( i = 0;  i < 16; ++i)
	 printf ("%i ", array[i]);
	printf ("\n");
	
	return 0;
}
// Function sorts an array of integers into given order. If argument order = 1 the order is ascending, if order = 0 it's descending.
// ‘ункци€ сортирует массив целых чисел в заданном пор€дке. ≈сли аргумент order задан равным единице, пор€док возрастающий, если нулю, пор€док убывающий.
void sort (void)
{
	int i, j, temp;
	
//ascending order	
	if (order == 1) {
		for ( i = 0; i < n - 1 ; ++i) {
			for ( j = i + 1; j < n ; ++j)
				if ( array[i] > array[j] ) {
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
//descending order
	else if (order == 0) {
		for ( i = 0; i < n - 1 ; ++i) {
			for ( j = i + 1; j < n ; ++j)
				if ( array[i] < array[j] ) {
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
	
}