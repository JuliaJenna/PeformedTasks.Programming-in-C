// Program demonstrates redirecting  input and output to files.
// Программа демонстрирует направление ввода и вывода в файлы.

#include <stdio.h>
int main (void)
{
FILE *outputFile;
outputFile = fopen("data.txt", "w");
fprintf (outputFile, "Programming is fun.\n");
fprintf (outputFile, "And programming in C is even more fun.\n");
fclose (outputFile);

return 0;
}