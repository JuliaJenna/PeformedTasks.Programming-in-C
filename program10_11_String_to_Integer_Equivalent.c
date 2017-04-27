#include <stdio.h>
#include <stdbool.h>
// Function converts a string to its equivalent integer.
// Функция преобразует символьную строку в соответствующее целое число.
int strToInt (const char string[])
{
	int i, intValue, result = 0;
	bool negative = 0;
	
	if ( string[0] == '-' )
	negative = 1;
	for ( i = 0; (string[i] >= '0' && string[i] <= '9') || ( i == 0 && string[0] == '-') ; ++i )
	{
		if ( i == 0 && negative == true )
		continue;
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}
	if ( negative == true )
	result = 0 - result;
	return result;
}

int main (void)
{
	int strToInt (const char string[]);
	
	printf ("%i\n", strToInt("245"));
	printf ("%i\n", strToInt("100") + 25);
	printf ("%i\n", strToInt("13x5"));
	printf ("%i\n", strToInt("-5"));
	
	return 0;
}