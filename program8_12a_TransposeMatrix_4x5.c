#include <stdio.h>
// Function transposes the 4 x 5 matrix.
// Функция транспонирует матрицу 4 х 5.
int transposeMatrix ( int M[4][5], int N[5][4] )
{
int i, j;

for (i = 0; i < 4; ++i) {
	for (j = 0; j < 5; ++j) 
	 N[j][i] = M[i][j];
	}
	 return N[5][4];
}
int main (void)
{
int transposeMatrix ( int M[4][5], int N[5][4] );
int SampleArray[4][5] = {1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4};
int i, j;
int TransposedArray[5][4];

TransposedArray[5][4] = transposeMatrix(SampleArray, TransposedArray);
for (j = 0; j < 5; ++j) {
	for (i = 0; i < 4; ++i)
	printf ("%i ", TransposedArray[j][i]);
	printf ("\n");
	}
	
return 0;
}
