// Program copies one file to another, replacing all lowercase characters with their uppercase equivalents.
// Программа копирует один файл в другой, заменяя при этом все строчные символы на заглавные.

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	FILE *in, *out;
	int c;
		
	// open input and output files
	
	if ( ( in = fopen ("copyme.txt", "r")) == NULL ) {
		printf ("Can't open copyme.txt for reading.\n");
		return 1;
	}
	
	if ( ( out = fopen ("data.txt", "w")) == NULL ) {
		printf ("Can't open data.txt for writing.\n");
		return 2;
	}
 
	// copy in to out
	
	while ( (c = getc (in) ) != EOF )
	{	
		c = toupper(c);
		putc (c, out);
	}
	
	// Close open files
	
	fclose (in);
	fclose (out);
	
	printf ("File has been copied.\n");
	
 
	return 0;
}