// Program shows examples of using of global variables.
// Программа демонстрирует использование глобальных переменных.
#include <stdio.h>
int SourceArray[4][5] = {1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4};
int TransposedArray[5][4];
int rows = 4;
int columns = 5;

int transposeMatrix ( void )
{
int i, j;

for (i = 0; i < rows; ++i) {
	for (j = 0; j < columns; ++j) 
	 TransposedArray[j][i] = SourceArray[i][j];
	}
	 return 0;
}

int main (void)
{
int transposeMatrix ( void );
int i, j;

transposeMatrix();
for (j = 0; j < 5; ++j) {
	for (i = 0; i < 4; ++i)
	printf ("%i ", TransposedArray[j][i]);
	printf ("\n");
	}
	
return 0;
}
