// Program implements and shows using of function replaceString.
// Программа реализует и демонстрирует использование функции replaceString.

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
// Function determines if one character string exists inside another string.
// Функция определяет, существует ли одна строка в другой строке в качестве подстроки.
int findString ( char line[], char subline[])
{
int i = 0, j = 0;
int thereIs;
while ( line[i] != subline [0] && line[i] != '\0' )
	 ++i;
thereIs = i;
while ( line[i] == subline[j] && 
		( line[i] != '\0' && subline[j] != '\0') )
	{ ++i;
	  ++j;
	}
if ( subline[j] != '\0' )
 thereIs = -1;
return thereIs;
}
// Function removes a specified number of characters from a character string.
// Функция для удаления части строки.
void removeString ( char text[], int index, int symbols)
{
int i, j;
j = index + symbols;
for (i = index; text[j] != '\0'; ++i, ++j)
	text[i] = text[j];
text[i] = '\0';
}
// Function inserts one character string into another string.
// Функция для вставки одной строки в другую
void insertString (char source[], char subline[], int index)
{
int i, j;
char text[200];

for ( i = 0; i < index ; ++i )
text [i] = source[i];
for ( j = 0; subline[j] != '\0' ; ++i, ++j )
text[i] = subline[j];
for ( j = index; source[j] != '\0' ; ++i, ++j )
text[i] = source[j];
text[i] = '\0';
for ( i = 0; text[i] != '\0'; ++i )
source[i] = text[i];
source[i] = '\0';
}
// Function replaces sequence of chacacters in a string.
// Функция производит замену текста в строке.
void replaceString ( char source[], char string[], char substitute[] )
{
int index, length;
int stringLength (const char string[]);
int findString ( char line[], char subline[]);
void removeString ( char text[], int index, int symbols);
void insertString (char source[], char subline[], int index);

index = findString ( source, string );
length = stringLength ( string ); 
removeString ( source, index, length );
insertString ( source, substitute, index );
}

int main (void)
{
char text[] = "There is only 1 asterisk (**) in the text.\n";
void replaceString ( char source[], char string[], char substitute[]);

printf ("%s", text);
replaceString (text, "1", "one");
printf ("%s", text);
replaceString (text, "*", "");
printf ("%s", text);
return 0;
}