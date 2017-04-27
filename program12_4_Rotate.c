// Program to illustrate rotation of integers
// Программа для иллюстрации ротации целочисленных переменных
#include <stdio.h>
int main (void)
{
 unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
 unsigned int rotate (unsigned int value, int n);
 
 printf ("%x\n", rotate (w1, 8));
 printf ("%x\n", rotate (w1, -16));
 printf ("%x\n", rotate (w2, 4));
 printf ("%x\n", rotate (w2, -2));
 printf ("%x\n", rotate (w1, 0));
 printf ("%x\n", rotate (w1, 44));
 
 return 0;
}
// Function returns the number of bits contained in an int on particular machine.
// Функция определяет число битов в типе int.
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
// Function to rotate an unsigned int left or right
// Функция для ротации целочисленного значения типа unsigned int влево или вправо
unsigned int rotate (unsigned int value, int n)
{
unsigned int result, bits;
int size;
int int_size (void);

size = int_size();

if ( n > 0 )
	n = n % size;
else
	n = -(-n % size);
	
if ( n == 0 )
	result = value;
else
	if ( n > 0 ) {		// Ротация влево.
	 bits = value >> (size - n);
	 result = value << n | bits;
	 }
else {					// Ротация вправо.
	n = - n;
	bits = value << (size - n);
	result = value >> n | bits;
	}
 return result;
}