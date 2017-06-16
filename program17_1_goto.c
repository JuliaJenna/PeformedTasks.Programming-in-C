// Program shows example of using of goto.
// Программа демонстрирует пример использования goto.

// Program copies two files to Standard Output.
// Программа копирует два файла в stdout.

#include <stdio.h>
int main (void)
{
	char inName1[64], inName2[64];
	FILE *in;
	int c, file;
	
	// get file names from user
	
	printf ("Enter name of first file to be copied: ");
	scanf ("%63s",inName1);
	printf ("Enter name of second file to be copied: ");
	scanf ("%63s",inName2);

	// open first file
	
	if ( ( in = fopen (inName1, "r")) == NULL ){
		file = 1;
		goto can_not_open;
	}
	
	// copy the first file to stdout and close it
	
	while ( (c = getc (in) ) != EOF )
		putchar (c);
	fclose(in);
	
	// open first file
	
	if ( ( in = fopen (inName2, "r")) == NULL ) {
		file = 2;
		goto can_not_open;	
	}

	// copy second file to stdout and close it

	while ( (c = getc (in) ) != EOF )
		putchar (c);
	fclose(in);
	
	printf ("\nFiles have been copied.\n");
	
 	return 0;
	
	can_not_open: { 
		if (file == 1) {
			printf ("Can't open %s for reading.\n", inName1);
			return 1; 
		}
		if (file == 2) {
			printf ("Can't open %s for reading.\n", inName2);
			return 2; 
		}
	}
}