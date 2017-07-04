// Program displays the contents of a file at the terminal 20 lines at a time.
// ��������� ���������� ���������� ����� �� 20 �������� �� ���.
/* At the end of each 20 lines, the program waits for a character to be entered from the terminal. If the character is the letter q, the program stops the display of the file; any other character causes the next 20 lines from the file to be displayed.*/
/* ����� ������ ������ 20 �����, ��������� ��� ����� ������� � ���������. ���� ������ ����� q, ��������� ���������� �����. ���� ������ ����� ������ ������, ��������� ��������� 20 �������. */

#include <stdio.h>

int main (void)
{
	FILE *in;
	char c, status, *checkPtr, buffer[300];
	int d, i = 0;
		
	// open an input file
	
	if ( ( in = fopen ("copyme2.txt", "r")) == NULL )
	{
		printf ("Can't open copyme.txt for reading.");
		return 1;
	}
	
	// read and put symbols in output
	
	do
	{
		checkPtr = fgets(buffer, 300, in);
		if (feof(in))
			break;
		printf("%s", buffer);
		++i;
		if (( d = i%20) == 0)
		{	
			status = getchar();
			if (status == 'q')
				break;
		}
	}
	while (checkPtr != NULL);
		
	// close an input file
	
	fclose(in);
	
	return 0;
}