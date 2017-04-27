// Extraction of a portion of a character string
// Извлечение части символьной строки
#include <stdio.h>

#include <stdio.h>
// Function counts the number of characters in a string.
// Функция считает количество символов в строке.
int stringLength (const char string[])
{
int count = 0;
while (string[count] != '\0')
	++count;
return count;
}
// Function extracts a portion of a character string.
// Функция извлекает часть символьной строки.
void substring (char source[], int start, int count, char result[])
{
char character;
int i, symbols;
	
	symbols = stringLength(source);
	if ( symbols < start + count )
	count = symbols - start;
	
	for (i = 0; i < count; ++i)
	{
		result[i] = source[start + i];
	}
	result[i + 1] = '\0';
}
int main (void)
{
char Result[10];
void substring (char source[], int start, int count, char result[]);
substring ("character", 4, 3, Result); 
printf ("%s\n\n", Result);
}