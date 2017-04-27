// The program defines and tests a macro IS_UPPER_CASE that gives a nonzero value if a character is an uppercase letter.
// ��������� ����� � ������������� ������ ������������� ������� IS_UPPER_CASE, ������� ���������� ��������� ��������, ���� ����������� ������ ����� � ������� ��������.

#include <stdio.h>
#include <stdbool.h>
// The macro that gives a nonzero value if a character is an uppercase letter.
#define IS_UPPER_CASE(x,f)	( ( ((x) >= 'A') && ((x) <= 'Z') ) ? (f = 1) : (f = 0) )
int main (void)
{
	char c='A';
	char z='a';
	_Bool flag;
	
	flag = IS_UPPER_CASE(c, flag);
	printf ("%i\n", flag);	
	printf ("%i\n", IS_UPPER_CASE(z, flag));
 
 return 0;
}