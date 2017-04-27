/* Program implements and shows examples of using function that finds the least common multiple of two nonnegative integer values. */
/* Программа реализует и демонстрирует примеры использования функции, которая находит наименьшее общее кратное двух неотрицательных чисел. */

#include <stdio.h>
/* Function finds the greatest common divisor of two nonnegative integer values. */
/* Функция находит наибольший общий делитель двух неотрицательных чисел. */
int gcd (int u, int v)
{
	int temp;
	while (v != 0 ) {
	temp = u % v;
	u = v;
	v = temp;
	}
	return u;
}
/* Function finds the least common multiple of two nonnegative integer values. */
/* Функция находит наименьшее общее кратное двух неотрицательных чисел. */
int lcm (int u, int v)
{
int temp = 0;
if ((u >= 0) && (v >= 0))
temp = u * v / gcd (u,v);

return temp;
}
int main (void)
{
	int result;
	
	result = lcm (150, -35);
	printf ("The lcm of 150 and -35 is %i\n", result);

	result = lcm (15, 10);
	printf ("The lcm of 15 and 10 is %i\n", result);
	
	printf ("The lcm of 83 and 240 is %i\n", lcm (83, 240));

return 0;
}