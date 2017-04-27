// Program implements and shows examples of using of extended function replaceString.
// ��������� ��������� � ������������� ������� ������������� ����������� ������� replaceString.

#include <stdio.h>
#include <stdbool.h>
// ������� �������� ���������� �������� � ������
int stringLength (const char string[])
{
int count = 0;
while (string[count] != '\0')
	++count;
return count;
}
// ������� ��� ����������� ����, ��� ���� ������ ���������� � ������ ������ � �������� ���������
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
// ������� ��� �������� ����� ������
void removeString ( char text[], int index, int symbols)
{
int i, j;
j = index + symbols;
for (i = index; text[j] != '\0'; ++i, ++j)
	text[i] = text[j];
text[i] = '\0';
}
// ������� ��� ������� ����� ������ � ������
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
// Extended replaceString
// ����������� �������, ������������ ������ ������.
bool replaceString ( char source[], char string[], char substitute[] )
{
	int index, length;
	bool result;
	int findString (char line[], char subline[]);
	int stringLength (const char string[]);
	void removeString (char text[], int index, int symbols);
	void insertString (char source[], char subline[], int index);

	index = findString ( source, string );
	if (index != -1)	
		result = true;		// Success of replacement indication. 	��������� ������ ������ (�.�. ����, ���� �� ������� (� ������, � ����� ��������) ������, ���������� ������).
	else
		result = false;
	length = stringLength ( string ); 
	removeString ( source, index, length );
	insertString ( source, substitute, index );

return result;
}

int main (void)
{
int i;
bool stillFound;
char text[] = "There is only 1 asterisk (**) in the text.\n";
bool replaceString ( char source[], char string[], char substitute[]);

printf ("%s", text);
replaceString (text, "1", "one");
printf ("%s", text);
replaceString (text, "*", "");
printf ("%s", text);

// Deletion of all blank spaces in the string
// �������� ���� �������� �� ������
do
	stillFound = replaceString (text, " ", ""); 
	while ( stillFound == true );
printf ("%s", text);
return 0;
}