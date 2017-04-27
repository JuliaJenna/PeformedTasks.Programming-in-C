#include <stdio.h>
#include <stdbool.h>
//Функция, которая преобразовывает целочисленное значение в символьную строку.
// Function converts an integer value into a character string.
void intToStr (int number, char string[])
{
int remainder, j;
int i = 0;
char buffer[12];
bool negative = 0;

if ( number == 0 ) 
 {
 string[0] = '0';
 string[1] = '\0';
 }
 else {
  if ( number < 0 )
  {
  negative = 1;
  number =  - number;
  }
  do {
  remainder = number%10;
  // Assign relevant number of ASCII symbol to buffer[i].
  // задаём для символа buffer[i] номер соответствующего ASCII символа
  // buffer[i] = remainder + 48; - можно задать следующую строку и так
  buffer[i] = remainder + '0';
  number = number/10;
  ++i;
  }
 while (number != 0);
 }
 
  if ( negative )
  buffer[i] = '-';
  else
  i = i - 1;

 for ( j = 0; i >= 0 ; ++j, --i)
 string[j] = buffer[i];
 string[j] = '\0';
}

int main (void)
{
char string[12];
void intToStr (int number, char string[]);

intToStr(97, string);
printf ("%s\n", string);
intToStr(0, string);
printf ("%i\n", string[0]);
intToStr(-7, string);
printf ("%s\n", string);
intToStr(-75, string);
printf ("%s\n", string);

return 0;
}