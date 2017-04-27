// Program defines and tests out functions bit_test and bit_set.
// Программа определяет и демонстрирует примеры использования функция bit_test и bit_set.
#include <stdio.h>
// Функция определяет число битов в типе unsigned int
 int int_size (void) 
 {
  unsigned int w1 = ~0;
  int size = 0;
    
  while (w1) {
   w1 >>= 1;
   ++size;
   }
   
   return size;
 }
 
// Function returns 1 if bit number n is on inside the word, and 0 if it is off. 
// Bit number 0 references the leftmost bit inside the integer.
// Функция определяет состояние бита с номером n и возвращает 1, если бит содержит 1 и 0, если бит содержит 0.
// Нумерация битов осуществляется слева направо. 0 указывает на крайний левый бит.
int bit_test (unsigned int number, int n)
 {
	int test, size;
	int int_size (void);
	
	size = int_size();
	if (n > size)
	n = n % size;
	if ( ((1 << size - n - 1 ) & number ) == 0)
	test = 0;
	else
	test = 1;
	
	return test;
 }

// The function returns the result of turning bit n on inside the integer.
// Функция устанавливаeт бит с номером n в единицу.
unsigned int bit_set (unsigned int word, int n)
 {
	int size;
	int int_size (void);
	
	size = int_size ();
	if ( n < 0 || n > size)
		return 0;
		
  return word | (1 << n);
 }
int main (void)
{
 int a;
 unsigned int number = 3;
 int bit_test (unsigned int number, int n);
 unsigned int bit_set (unsigned int number, int n);
 
 printf ("Bit_test testing: \n");
  a = bit_test(number, 31);
 printf ("%i\n", a);
 a = bit_test(number, 0);
 printf ("%i\n", a);
 a = bit_test(number, 4);
 printf ("%i\n", a);
 a = bit_test(number, 1);
 printf ("%i\n", a);
 a = bit_test(1, 0);
 printf ("%i\n", a);
 
 printf ("\n Bit_set testing (should be: 1, 3, 20, 12): \n");
 a = bit_set(1,0);
 printf ("%i \n", a);
 printf ("%i \n", bit_set(2,0));
 printf ("%i \n", bit_set(4,4));
 printf ("%i \n", bit_set(4,3));
 
 return 0;
}