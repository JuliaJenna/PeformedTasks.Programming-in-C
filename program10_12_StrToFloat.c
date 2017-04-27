#include <stdio.h>
#include <stdbool.h>
#include <math.h> 
// Function converts a string to floating-point value.
// Функция преобразует символьную строку в соответствующее вещественное число.
float strToFloat (const char string[])
{
	int i, intValue, mantissa = 0;
	float result = 0;
	bool negative = 0;
	
	if ( string[0] == '-' )
	negative = 1;
	for ( i = 0; (string[i] >= '0' && string[i] <= '9') || ( string[i] == '.') || ( i == 0 && negative == true ) ; ++i )
	{
		if ( i == 0 && negative == true )
		continue;
		else if ( string[i] == '.')
		mantissa = i;
		else {
		intValue = string[i] - '0';
		result = result * 10 + intValue;
		}
	}
	if ( mantissa != 0 ) {
	mantissa = powf (10, i - mantissa - 1);
	result = result/mantissa;
	}
	if ( negative == true )
	result = 0 - result;
	return result;
}

int main (void)
{
	float strToFloat (const char string[]);
	
	printf ("%.1f\n", strToFloat("245.6"));
	printf ("%.1f\n", strToFloat("100") + 25.7);
	printf ("%.4f\n", strToFloat("-867.6921"));
	printf ("%.1f\n", strToFloat("-5"));
	
	return 0;
}