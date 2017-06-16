// Program  merges lines alternately from two files and writes the results to stdout. If one file has less lines than the other, the remaining lines from the larger file simply are copied to stdout.
// Программа объединяет соответствующие строки в двух файлах и выдаёт результат в stdout. Если в одном файле меньше строк, чем в другом, оставшиеся строки  большего файла просто копируются в stdout.

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	FILE *in1, *in2;
	int c, h;
		
	// open input and output files
	
	if ( ( in1 = fopen ("text1.txt", "r")) == NULL ) 
	{
		printf ("Can't open text1.txt for reading.\n");
		return 1;
	}
	
	if ( ( in2 = fopen ("text2.txt", "r")) == NULL ) 
	{
		printf ("Can't open text2.txt for reading.\n");
		return 2;
	}
 
	// copy in1 and in2 to stdout
	
	while ( ( (c = getc (in1)) != EOF) || ( (h = getc (in2)) != EOF) )
	{
		if (c != EOF)
		{
			putc (c, stdout);
			while (((c = getc (in1) ) != '\n' ) && (c != EOF) )
				putc (c, stdout);
		}
		if (h != EOF)
		{
			if (h != '\n')
				putc (h, stdout);
			while (((h = getc (in2) ) != '\n' ) && (h != EOF))
				putc (h, stdout);
		}
		putc ('\n', stdout);
	}

	// Close open files
		
	fclose (in1);
	fclose (in2);
	
	printf ("\nFiles have been copied.\n");
	 
	return 0;
}