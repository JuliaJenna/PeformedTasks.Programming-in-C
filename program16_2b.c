// Program demonstrates redirecting  input and output to files.
// ��������� ������������� ����������� ����� � ������ � �����.

#include <stdio.h>
int main (void)
{
FILE *outputFile;
outputFile = fopen("data.txt", "w");
fprintf (outputFile, "Testing...\n..1\n...2\n....3\n");
fclose(outputFile);
return 0;
}