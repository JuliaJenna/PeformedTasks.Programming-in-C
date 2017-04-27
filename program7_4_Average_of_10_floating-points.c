// Program calculates the average of an array of 10 floating-point values.
// Расчет среднего значения для массива из 10 вещественных чисел.
#include <stdio.h>
int main (void)
{
float numbers[10];
int i;
float sum;

sum = 0;

printf ("Enter your numbers: \n");
for (i = 0; i != 10; i++)
	scanf ("%f", &numbers[i]);
for (i = 0; i != 10; i++)
	sum = sum + numbers[i];
printf ("Average of entered numbers equals %.2f ", sum / 10 );
return 0;
}
