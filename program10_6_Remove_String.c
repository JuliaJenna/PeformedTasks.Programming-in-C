#include <stdio.h>
// Function removes a specified number of characters from a character string.
// Функция удаляет часть строки.
void removeString ( char text[], int index, int symbols)
{
int i, j;
j = index + symbols;
for (i = index; text[j] != '\0'; ++i, ++j)
	text[i] = text[j];
text[i] = '\0';
}

int main (void)
{
char text[] = "the wrong son";
char text2[] = "he is son of son of son";
void removeString ( char text[], int index, int symbols);

removeString (text, 4, 6);
printf ("%s\n", text);
removeString (text2, 17, 6);
printf ("%s\n", text2);
return 0;
}