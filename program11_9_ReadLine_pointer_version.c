// Program implements readLine function (from Chapter 10) so that it uses a character pointer.
// Считывание строк данных функцией readLine, использующей указатель на переменную типа char.

#include <stdio.h>
int main (void)
{
 int i;
 char line[81];
 void readLine (char *buffer);
 
 for (i = 0; i < 3; ++i)
 {
   readLine(line);
   printf ("%s\n\n", line);
 }
 return 0;
}
// Function reads a line of text from the terminal.
// Функция считывает строку текста с терминала.
void readLine (char *buffer)
{
	char character;
	
	do
	{
	 character = getchar();
	 *buffer++ = character;
	}
	while ( character != '\n' );
	
	*(buffer - 1) = '\0';
}