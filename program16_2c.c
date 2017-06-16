// Программа демонстрирует примеры использования функций fopen, fclose, fprintf, fscanf.	Программа рассчитывает сумму цифр числа.
// Program shows examples of using of functions fopen, fclose, fprintf and fscanf.			Program calculates the sum of digits of a number.

#include <stdio.h>

int main (void)
{
int number, right_digit, sum;
sum = 0;
FILE *inputFile, *outputFile;

inputFile = fopen ("inData.txt", "w");
fprintf (inputFile, "105");
fclose (inputFile);

inputFile = fopen ("inData.txt", "r");
outputFile = fopen ("data.txt", "w");
fscanf (inputFile, "%i", &number);
fclose (inputFile);

while ( number != 0 ) {
right_digit = number % 10;
sum = sum + right_digit;
number = number / 10;
}

fprintf (outputFile, "%i", sum );
fprintf (outputFile, "\n");

fclose (outputFile);

return 0;
}