// A macro SHIFT to shift an unsigned int left if the count is positive, and right if negative.
// Макрос сдвигает беззнаковое целое значение влево, если счётчик (позиций сдвига) имеет положительное значение и вправо при отрицательном значении счётчика.

#include <stdio.h>
#define SHIFT(a,b) ( ( (b) > 0 ) ? ((a) <<= (b)) : ((a) >>= -(b)) )
int main (void)
{
	unsigned int w1 = 0177777u, w2 = 0150u, w3;
	
	printf ("%o \t %o\n", SHIFT(w1, 5), w1 << 5);
	printf ("%o \t %o\n", SHIFT (w1, -6), w1 >> 6);
	printf ("%o \t %o\n", SHIFT (w2, 0), w2 >> 0);
	
 return 0;
}