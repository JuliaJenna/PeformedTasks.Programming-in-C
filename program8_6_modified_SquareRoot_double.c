// Program implements and shows examples of using of modified function squareRoot that works with arguments (and return result) of double precision value.
// ��������� ��������� � ������������� ������� ������������� ���������������� ������� squareRoot, ������� �������� � ������� ������� ��������.

#include <stdio.h>
// Function calculates the absolute value of a number.
// ������� ������������ ���������� �������� �����.
double absoluteValue (double x)
{
	if (x < 0)
	x = -x;

	return (x);
}

// Function computes the square root of a number. Is suitable for use when computing the square root of very large or very small numbers.
// ������� ������������ ���������� ������ �����. �������� ��� ���������� ����� ����� ������� � ����� ��������� �����.
double squareRoot (double x)
{
	const double epsilon = .00001;
	double guess = 1.0;
	while ( absoluteValue (guess * guess - x) >= epsilon)
	guess = (x / guess  + guess) / 2.0;

return guess;
}

int main (void)
{
	printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
	printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
	printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));

return 0;
}