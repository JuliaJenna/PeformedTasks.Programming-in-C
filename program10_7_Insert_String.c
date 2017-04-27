#include <stdio.h>
// Function inserts one character string into another string.
// Функция для вставки одной строки в другую
void insertString (char source[], char subline[], int index)
{
int i, j;
char text[200];

for ( i = 0; i < index ; ++i )
text [i] = source[i];
for ( j = 0; subline[j] != '\0' ; ++i, ++j )
text[i] = subline[j];
for ( j = index; source[j] != '\0' ; ++i, ++j )
text[i] = source[j];
text[i] = '\0';
for ( i = 0; text[i] != '\0'; ++i )
source[i] = text[i];
source[i] = '\0';
}

int main (void)
{
char text[] = {"the wrong son"};
void insertString (char source[], char subline[], int index);

insertString(text, "per", 10);
printf ("%s\n", text);
return 0;
}