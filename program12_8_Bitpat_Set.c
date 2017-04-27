// Program sets a specified set of bits to a particular value.
// ѕрограмма устанавливает в заданные биты соответствующее значение.
#include <stdio.h>
// ‘ункци€ определ€ет число битов в типе unsigned int
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
// ‘ункци€ извлекает заданную последовательность битов (длиной n) из переменной типа unsigned int. Ќумераци€ битов при этом ведЄтс€ слева (0 - крайний левый бит).
// Function extracts a specified set of bits.
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
 
// Function sets a specified set of bits to a particular value.
// Value to which the specified bits are to be set is right adjusted in the unsigned int (in second argument).
// Leftmost bit in recipient numbered 0; a fourth argument (int) specifies the size of the field.

// ‘ункци€ устанавливает в заданные биты соответствующее значение.
// n - число устанавливаемых битов; в insert биты дл€ установки выровнены по правому краю; startBit - номер бита в recipient, при этом 0 - крайний левый бит.
void bitpat_set (unsigned int *recipient, unsigned int insert, int startBit, int n)
{
 int size; 
 int int_size (void);
 unsigned int bitpat_get (unsigned int number, int begin, int count);
 
 size = int_size();
 *recipient = *recipient | bitpat_get(insert, size - n, n) << size - startBit - n;
 }

int main (void)
{
 unsigned int x = 0;
 void bitpat_set (unsigned int *recipient, unsigned int insert, int startBit, int n);
 
 bitpat_set (&x, 5, 20, 4);
 printf("%i\n", x);
 x = 0;
 bitpat_set (&x, 1, 31, 1);
 printf("%i\n", x);
 printf("Should be: 1280, 1\n");
 return 0;
}