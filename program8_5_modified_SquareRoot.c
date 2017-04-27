// Program implements and shows examples of using of modified function squareRoot.
// ��������� ��������� � ������������� ������� ������������� ���������������� ������� squareRoot.

#include <stdio.h>
// Function calculates the absolute value of a number.
// ������� ������������ ���������� �������� �����.
float absoluteValue (float x)
{
	if (x < 0)
	x = -x;

	return (x);
}

// Function computes the square root of a number. Is suitable for use when computing the square root of very large or very small numbers.
// ������� ������������ ���������� ������ �����. �������� ��� ���������� ����� ����� ������� � ����� ��������� �����.
float squareRoot (float x, float epsilon)
{
	float guess = 1.0;
	while ( absoluteValue (guess * guess / x - 1 ) >= epsilon) {
		guess = (x / guess  + guess) / 2.0;
	}
	
	
	
	return guess;
}

int main (void)
{
	printf ("squareRoot (2.0, .00001) = %f\n", squareRoot (2.0, .00001));
	printf ("squareRoot (144.0, .00001) = %f\n", squareRoot (144.0, .00001));
	printf ("squareRoot (17.5, .00001) = %f\n", squareRoot (17.5, .00001));

return 0;
}