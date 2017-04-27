// Program extracts a specified set of bits
// Программа извлекает заданную последовательность битов
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

// Function extracts a specified set of bits from the first argument and returns the result. Bit numbering starts at 0 with the leftmost bit.
// Функция извлекает заданную последовательность битов (длиной n) из переменной типа unsigned int. Нумерация битов при этом ведётся слева (0 - крайний левый бит).
unsigned int bitpat_get (unsigned int number, int begin, int count)
{
    int   size, i;

    size = int_size(); 

    if (begin < 0  ||  begin > size  || count < 0  ||  count + begin > size)
       return  0;

    // first shift number to the leftmost part of the word

    number <<= begin;

    // now when we shift right, the bits to the left of number will be cleared 

    return  number  >>  size - count;
}

int main (void)
{
 unsigned int x;
 int extracted;
 unsigned int bitpat_get (unsigned int value, int begin, int count);
 
 x = 15;
 extracted = bitpat_get (x, 29, 3);
 printf("%i\n", extracted);
 extracted = bitpat_get (x, 24, 5);
 printf("%i\n", extracted);
 // should be 7 and 1
 
 return 0;
}