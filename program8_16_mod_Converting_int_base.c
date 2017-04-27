// Program converts a positive integer to another base. Program terminates when a zero is typed in as the value of the number to be converted.
// Программа преобразовывает положительное целое число из одной системы счисления в другую. Когда в качестве числа для преобразования вводится 0, производится выход из программы.
#include <stdio.h>
int convertedNumber[64];
long int numberToConvert = 1;
int base;
int digit = 0;

void getNumberAndBase (void)
{
	int i;
	printf ("Number to be converted?\n");
	scanf ("%li", &numberToConvert);
	for (i = 1; i = 10, base < 2 || base > 16; ++i ) {
		printf ("Base? ");
		scanf ("%i", &base);
	}	
}

void convertNumber (void)
{
	do {
		convertedNumber[digit] = numberToConvert % base;
		++digit;
		numberToConvert /= base;
	}
	while ( numberToConvert != 0 );
}

void displayConvertedNumber (void)
{
	const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int nextDigit;
	printf ( "Converted number = ");
	for (--digit; digit >= 0; --digit) {
		nextDigit = convertedNumber[digit];
		printf ("%c", baseDigits[nextDigit]);
	}
printf ("\n");
}
int main (void)
{
int i;
void getNumberAndBase (void), convertNumber (void), displayConvertedNumber (void);

printf ("Note: enter 0 instead of number to convert if you want to finish\n");
	for ( i = 1; ; ++i ) {
		getNumberAndBase ();
		if ( numberToConvert == 0 )
		break;
		convertNumber();
		displayConvertedNumber ();
	}
return 0;
}