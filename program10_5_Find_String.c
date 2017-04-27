// Program determins if the one character string is in another string.
// ��������� ����������, ���� �� ���� ���������� ������ � ������� ������. 

#include <stdio.h>
// Function determines if one character string exists inside another string.
// ������� ����������, ���������� �� ���� ������ � ������ ������ � �������� ���������.
int findString ( char line[], char subline[])
{
int i = 0, j = 0;
int thereIs;
while ( line[i] != subline [0] && line[i] != '\0' )
	 ++i;
thereIs = i;
while ( line[i] == subline[j] && 
		( line[i] != '\0' && subline[j] != '\0') )
	{ ++i;
	  ++j;
	}
if ( subline[j] != '\0' )
 thereIs = -1;
return thereIs;
}

int main (void)
{
int findString ( char line[], char subline[]);
int index;

index = findString ("a chatterbox", "hat");
printf ("%i\n", index);
index = findString ("a chatterbox", "box");
printf ("%i\n", index);
index = findString ("a chatterbox", "cat");
printf ("%i\n", index);
index = findString ("a chatterbox", "good");
printf ("%i\n", index);
}