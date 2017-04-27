#include <stdio.h>
#include <stdbool.h>
// Function sorts an array of integers into given order. If argument order = 1 the order is ascending, if order = 0 it's descending.
// Функция сортирует массив целых чисел в заданном порядке. Если аргумент order задан равным единице, порядок возрастающий, если нулю, порядок убывающий.
void sort (int a[], int n, bool order)
{
	int i, j, temp;

//ascending order		возрастающий порядок
	if (order == 1) {
		for ( i = 0; i < n - 1 ; ++i) {
			for ( j = i + 1; j < n ; ++j)
				if ( a[i] > a[j] ) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
//descending order		убывающий порядок
	else if (order == 0) {
		for ( i = 0; i < n - 1 ; ++i) {
			for ( j = i + 1; j < n ; ++j)
				if ( a[i] < a[j] ) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	
}
int main (void)
{
	int i;
	int	array[16] = { 35, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
	void sort (int a[], int n, bool order);
	
	printf ("The array before the sort: \n");
	for ( i = 0; i < 16; ++i)
	 printf ( "%i ", array[i]);
	 sort (array, 16, 0);
	 printf ("\n\nThe array after the sort: \n");
	 for ( i = 0;  i < 16; ++i)
	 printf ( "%i ", array[i]);
	printf ( "\n");
	
	return 0;
}