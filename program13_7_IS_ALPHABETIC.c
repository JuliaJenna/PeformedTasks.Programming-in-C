// The program defines and tests a macro IS_ALPHABETIC that gives a nonzero value if a character is an alphabetic character.
// Программа задаёт и демонстрирует пример использования макроса IS_ALPHABETIC, позволяющего определить, является ли символ буквой.
#include <stdio.h>
#include <stdbool.h>
#define IS_LOWER_CASE(x,f) ( (((x) >= 'a') && ((x) <= 'z') ) ? (f = 1) : (f = 0) )
#define IS_UPPER_CASE(x,f)	( ( ((x) >= 'A') && ((x) <= 'Z') ) ? (f = 1) : (f = 0) )
// The macro that gives a nonzero value if a character is an alphabetic character.
// Макрос возвращает ненулевое значение, если символ является буквой.
#define IS_ALPHABETIC(x,f) ( ( (IS_UPPER_CASE (x,f)) || (IS_LOWER_CASE(x,f)) ) ? (f = 1) : (f = 0) )

int main (void)
{
	char c='A';
	char z='a';
	_Bool flag = 0;
	
	printf ("%i\n", IS_ALPHABETIC('7', flag));
	flag = IS_ALPHABETIC('j', flag);
	printf ("%i\n", flag);
	flag = IS_ALPHABETIC(c, flag);
	printf ("%i\n", flag);
	
 return 0;
 }