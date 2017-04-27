#include <stdio.h>
// Function raises an integer to a positive integer power.
// Функция возводит целое число в положительную степень.
long int x_to_the_n (long int x, int n)
{
	int i;
	long int result = 1;
	
	for ( i = 1 ; i <=n ; ++i ) 
	result = result * x; 
	
	return (result);
}

int main (void)
{
	long int x;
	int n;
	
	printf ("Number?\n");
	scanf ("%li", &x);
	printf ("Power?\n");
	scanf ("%i", &n);
	
	printf ("%li ", x_to_the_n (x, n));

return 0;
}