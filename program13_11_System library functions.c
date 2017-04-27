// Program tests out the system library functions that are equivalent to the macros developed in exercises 6, 7, and 8. (The library functions: isupper, isalpha, and isdigit.)
// Программа демонстрирует примеры использования функций стандартных библиотек, эквивалентных макросам, разработанным в упражнениях 6,7 и 8. (Функции isupper, isalpha и isdigit.)
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
//macros for comparison
#define IS_LOWER_CASE(x,f) ( (((x) >= 'a') && ((x) <= 'z') ) ? (f = 1) : (f = 0) )
#define IS_UPPER_CASE(x,f)	( ( ((x) >= 'A') && ((x) <= 'Z') ) ? (f = 1) : (f = 0) )
#define IS_ALPHABETIC(x,f) ( ( (IS_UPPER_CASE (x,f)) || (IS_LOWER_CASE(x,f)) ) ? (f = 1) : (f = 0) )
#define IS_DIGIT(x,f) ( ( ((x) >= '0') && ((x) <= '9') ) ? (f = 1) : (f = 0) )

int main (void)
{
	char c='A';
	char z='8';
   
	printf ("\n isupper test (symbol - test):\n");
	printf ("%c %i\n", 'A', isupper('A'));
	printf ("%c %i\n", 'b', isupper('b'));
	printf ("\n isalpha test (symbol - test):\n");
	printf ("%c %i\n", z, isalpha(z));
	printf ("%c %i\n", c, isalpha(c));
	printf ("\n isdigit test (symbol - test):\n");
	printf ("%c %i\n", '&', isdigit('&'));
	printf ("%c %i\n", 'F', isdigit('F'));
	printf ("%c %i\n", '5', isdigit('5'));
	printf ("%c %i\n", z, isdigit(z));
 
 return 0;
}