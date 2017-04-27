// Program implements compareStrings function (from Chapter 10) so that it uses a character pointer.
// Программа демонстрирует примеры использования функции compareStrings, использующей указатели на переменную типа char.

#include <stdio.h>
#include <stdbool.h>

// Function to compare two character strings
// Функция для определения равенства двух строк
bool equalStrings (char *s1, char *s2)
{
	bool areEqual;
	
	while	( *s1 == *s2 &&
		*s1 != '\0' && *s2 != '\0' ) {
		s1++;
		s2++;
		}
	if ( *s1 == '\0' && *s2 == '\0' )
	 areEqual = true;
	else 
	 areEqual = false;
	 
	return areEqual;
}
int main (void)
{
 bool equalStrings (char *s1, char *s2);
 char stra[] = "string compare test";
 char strb[] = "string";
 
 printf ("%i\n", equalStrings (stra, strb));
 printf ("%i\n", equalStrings (stra, stra));
 printf ("%i\n", equalStrings (strb, "string"));
 
 return 0;
}