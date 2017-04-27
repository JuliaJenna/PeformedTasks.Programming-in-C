// Program implements the Sieve of Erastosthenes algorithm.
// Алгоритм "Решето Эратосфена". Программа отображает всех простые числа от 1 до n.

#include <stdio.h>
int main (void)
{
int i, j;
int P[150];

P[0] = 1;
P[1] = 1;

for (i = 2; i <= 150; ++i)
	P[i] = 0;

for (i = 2; i <= 150; ++i) {
	if (P[i] == 0) {
		for (j = 2; j*i <= 150; ++j)
		P[i*j] = 1;
	}
}

for (i = 2; i <= 150; ++i) {
if (P[i] == 0)
	printf ("%i ", P[i]);
}
return 0;
}
