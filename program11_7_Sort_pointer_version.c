// A pointer version of the sort function.
// Функция сортировки. Версия с указателями.
#include <stdio.h>
#include <stdbool.h>

// Function to sort an array of integers into ascending or descending order
// Функция сортирует массив целочисленных переменных в возрастающем или убывающем порядке.
void sort (int *a, int n, bool order)
{
	int temp, *i_pointer, *j_pointer;
	
	// ascending order
	// возрастающий порядок
	if (order == 1) {
		for (i_pointer = a; i_pointer < a+n-1; ++i_pointer) {
			for (j_pointer = i_pointer + 1; j_pointer < a+n; ++j_pointer)
				if (*i_pointer > *j_pointer) {
					temp = *i_pointer;
					*i_pointer = *j_pointer;
					*j_pointer = temp;
				}
			}
		}
	//descending order
	// убывающий порядок
	else if (order == 0) {
		for (i_pointer = a; i_pointer < a+n-1; ++i_pointer) {
			for (j_pointer = i_pointer + 1; j_pointer < a+n; ++j_pointer)
				if (*i_pointer < *j_pointer) {
					temp = *i_pointer;
					*i_pointer = *j_pointer;
					*j_pointer = temp;
				}
			}
		}
	
}

int main (void)
{
	int i;
	int	array[16] = { 35, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
	void sort (int *a, int n, bool order);
	
	printf ("The array before the sort: \n");
	for ( i = 0; i < 16; ++i)
	 printf ( "%i ", array[i]);
	sort (array, 16, 1);
	 printf ("\n\nThe array after the sort in ascending order: \n");
	 for ( i = 0;  i < 16; ++i)
	 printf ( "%i ", array[i]);
	sort (array, 16, 0);
	 printf ("\n\nThe array after the sort in descending order: \n");
	 for ( i = 0;  i < 16; ++i)
	 printf ( "%i ", array[i]);
	printf ( "\n");
	
	return 0;
}