// The program defines and tests two macros: IS_DIGIT and IS_SPECIAL.
// Программа задаёт и демонстрирует примеры использования двух макросов: IS_DIGIT и IS_SPECIAL.

#include <stdio.h>
#include <stdbool.h>
#define IS_LOWER_CASE(x,f) ( (((x) >= 'a') && ((x) <= 'z') ) ? (f = 1) : (f = 0) )
#define IS_UPPER_CASE(x,f)	( ( ((x) >= 'A') && ((x) <= 'Z') ) ? (f = 1) : (f = 0) )
#define IS_ALPHABETIC(x,f) ( ( (IS_UPPER_CASE (x,f)) || (IS_LOWER_CASE(x,f)) ) ? (f = 1) : (f = 0) )
// The a macro that gives a nonzero value if a character is a digit '0' through '9'.
// Макрос возвращает ненулевое значение, если принимаемый символ является цифрой от 0 до 9.
#define IS_DIGIT(x,f) ( ( ((x) >= '0') && ((x) <= '9') ) ? (f = 1) : (f = 0) )
//The macro gives a nonzero result if a character is a special character; that is, not alphabetic and not a digit.
// Макрос возвращает ненулевое значение, если принимаемый символ является специальным символом, т.е. ни буквой, ни цифрой.
#define IS_SPECIAL(x,f) ( ( (IS_ALPHABETIC (x,f)) || (IS_DIGIT(x,f)) ) ? (f = 0) : (f = 1) )

int main (void)
{
	char c='A';
	char z='8';
	_Bool flag = 0;
	
	printf ("IS_DIGIT test (symbol - test):\n");
	flag = IS_DIGIT(c, flag);
	printf ("%c %i\n", c, flag);
	printf ("%c %i\n", z, IS_DIGIT(z, flag));
	printf ("IS_SPECIAL test (symbol - test):\n");
	flag = IS_SPECIAL(c, flag);
	printf ("%c %i\n", c, flag);
	printf ("%c %i\n", z, IS_SPECIAL(z, flag));
	printf ("%c %i\n", '&', IS_SPECIAL('&', flag));
 return 0;
 }