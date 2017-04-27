#include <stdio.h>
// Function transposes the matrix of the specified dimensions.
// Функция транспонирует матрицу заданного размера.
int transposeMatrix ( int rows, int columns, int M[rows][columns], int N[columns][rows] )
{
int i, j;

for (i = 0; i < rows; ++i) {
	for (j = 0; j < columns; ++j) 
	 N[j][i] = M[i][j];
	}
	 return N[columns][rows];
}
int main (void)
{
int transposeMatrix ( int rows, int columns, int M[rows][columns], int N[columns][rows] );
int SampleArray[4][5] = {1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4};
int i, j;
int TransposedArray[5][4];

TransposedArray[5][4] = transposeMatrix(4, 5, SampleArray, TransposedArray);
for (j = 0; j < 5; ++j) {
	for (i = 0; i < 4; ++i)
	printf ("%i ", TransposedArray[j][i]);
	printf ("\n");
	}
	
return 0;
}
