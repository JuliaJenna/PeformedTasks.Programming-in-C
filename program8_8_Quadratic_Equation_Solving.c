// Program solves a quadratic equation.
// Программа рассчитывает корни квадратного уравнения.

#include <stdio.h>
// Function calculates the absolute value of a number.
// Функция рассчитывает абсолютное значение числа.
float absoluteValue (float x)
{
	if (x < 0)
	x = -x;

	return (x);
}

// Function computes the square root of a number. Is suitable for use when computing the square root of very large or very small numbers.
// Функция рассчитывает квадратный корень числа. Подходит для вычисления корня очень больших и очень маленьких чисел.
float squareRoot (float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	while ( absoluteValue (guess * guess - x) >= epsilon)
	guess = (x / guess  + guess) / 2.0;

return guess;
}

int main (void)
{
float a, b,c, discriminant, root1, root2;
float absoluteValue (float x); 
float squareRoot (float x);

printf ("Enter constant value of quadratic equation (a): ");
scanf ("%f", &a);
printf ("Enter constant value of quadratic equation (b): ");
scanf ("%f", &b);
printf ("Enter constant value of quadratic equation (c): ");
scanf ("%f", &c);

discriminant = b * b - 4 * a * c;
if (discriminant < 0)
	printf ("Roots of this equation are imaginary numbers.");
else {
root1 = (- b + squareRoot(discriminant))/(2*a);
root2 = (- b - squareRoot(discriminant))/(2*a);
printf ("First root equals %.2f, second root equals %.2f", root1, root2);
	}
return 0;
}