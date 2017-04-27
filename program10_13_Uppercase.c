#include <stdio.h>
// Функция преобразует все строчные буквы в соответствующие заглавные буквы.
// Function converts all lowercase characters in a string into their uppercase equivalents.
char uppercase (char c)
{
if ( c >= 'a' && c <= 'z')
c = c - 'a' + 'A';
return c;
}

int main (void)
{
char c = 'u';
char uppercase (char c);

printf ("%c\n", uppercase(c));
c = 'r';
printf ("%c\n", uppercase(c));
c = 'T';
printf ("%c\n", uppercase(c));
c = '7';
printf ("%c\n", uppercase(c));
c = '.';
printf ("%c\n", uppercase(c));
c = 'q';
printf ("%c\n", uppercase(c));

return 0;
}