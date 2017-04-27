// Program sorts a dictionary into alphabetical order.
// ��������� ��������� ����� � ������� � ���������� �������.

#include <stdio.h>
struct entry
{
 char word[10];
 char definition[50];
 };
//������� ��������� ���� ���������� �����.
int compareStrings (const char s1[], const char s2[])
{
	int i = 0, answer;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
		++i;
	if (s1[i] < s2[i] )
		answer = -1;	/*s1 < s2 , �.�. ������ ����� ��������� ����� � ������ �������, ��� ������*/
	else if ( s1[i] == s2[i] )
		answer = 0;	/*s1 == s2 */
	else
		answer = 1;	/*s1 > s2 */
		
return answer;
}
// Function sorts a dictionary into alphabetical order.
// ������� ��������� ����� � ������� � ���������� �������.
void dictionarySort (struct entry dictionary[], int n )
{
int i, j, q, a ;
struct entry buffer;
int compareStrings (const char s1[], const char s2[]);

for (i = 0; i < n; ++i)
 {
 for ( j = (i + 1) ; dictionary[j].word[0] != '\0' && j < n ; ++j ) {
 a = compareStrings (dictionary[i].word, dictionary[j].word);
	 if ( a == 1 )
	 {
	 // Interchange i and j
	 // ������ ������� ������ i � j
	 // Save the word i into buffer
	 // ��������� ����� i � ������
	 for (q = 0; dictionary[i].word[q] != '\0'; ++q)
	 buffer.word[q] = dictionary[i].word[q];
	 buffer.word[q] = '\0';
	 // Save the definition i into buffer
	 // ��������� ����������� i � ������
	 for (q = 0; dictionary[i].definition[q] != '\0'; ++q)
	 buffer.definition[q] = dictionary[i].definition[q];
	 buffer.definition[q] = '\0';
	 // Save the word j into position i
	 // ��������� ����� j �� ����� i
	 for (q = 0; dictionary[j].word[q] != '\0'; ++q)
	 dictionary[i].word[q] = dictionary[j].word[q];
	 dictionary[i].word[q] = '\0';
	 // Save the definition j into position i
	 // ��������� ����������� j �� ����� i
	 for (q = 0; dictionary[j].definition[q] != '\0'; ++q)
	 dictionary[i].definition[q] = dictionary[j].definition[q];
	 dictionary[i].definition[q] = '\0';
	 // Save the word (ex-)i from buffer into position j
	 // ��������� ������ ����� i �� ������� �� ����� j
	 for (q = 0; buffer.word[q] != '\0'; ++q)
	 dictionary[j].word[q] = buffer.word[q];
	 dictionary[j].word[q] = '\0';
	 // Save the definition (ex-)i from buffer into position j
	 // ��������� ������ ����������� i �� ������� �� ����� j
	 for (q = 0; buffer.definition[q] != '\0'; ++q)
	 dictionary[j].definition[q] = buffer.definition[q];
	 dictionary[j].definition[q] = '\0';
	 printf ("\n\n\n");
	 }
 }
 }
}

int main (void)
{
struct entry dictionary[100] = 
	{ {"abyss", "a bottomless pit"},
	{ "aadvark", "a burrowing African mammal" },
	{"acumen", "mentally sharp; keen"},
	{"baby", "an infant or very young child"}, 
	{"addle", "to become confused"}, 
	{"aerie", "a high nest"}, 
	{"affix", "to append; attach"}, 
	{"agar", "a jelly made from seaweed"}, 
	{"ahoy", "a nautical call of greeting"},
	{"aigrette", "an ornamental cluster of feathers"}, 
	{"ajar", "partially opened"} };
int i;
void dictionarySort (struct entry dictionary[], int n );

for (i = 0; dictionary[i].word[0] != '\0' ; ++i)
printf ("%s - %s.\n", dictionary[i].word, dictionary[i].definition);
printf ("\n");

dictionarySort (dictionary, 100);
for (i = 0; dictionary[i].word[0] != '\0' ; ++i)
printf ("%s - %s.\n", dictionary[i].word, dictionary[i].definition);
return 0;
}