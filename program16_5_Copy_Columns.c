// Program writes columns m through n of each line of a file to stdout.
// Программа выводит столбцы со столбца m по столбец n из файла в stdout.

#include <stdio.h>	

int main (void)
{
	FILE *in;
	int c, n, m, i=1;
		
	// open an input file
	
	if ( ( in = fopen ("copyme.txt", "r")) == NULL ) 
	{
		printf ("Can't open copyme.txt for reading.\n");
		return 1;
	}
	
	else
	{
	printf ("Enter numbers of the first and the second columns\n");
	scanf ("%i %i", &m, &n);
	
	// copy in to stdout
	
	while ( (c  = getc (in)) != EOF )
	{
		if ( c == '\n' )
		{
			putchar (c);
			i = 0;
		}
		else if ( (m <= i) && ( i <= n) )
			putchar (c);
		++i;
	}
	
	// Close open file
		
	fclose (in);
	
	printf ("\nColumns have been copied.\n");
	
	}
	
	return 0;
}