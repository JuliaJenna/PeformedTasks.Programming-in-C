#include <stdio.h>
// Function returns the number of bits contained in an int on particular machine.
// Функция определяет число битов в типе int на конкретной машине.
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
 
 int main (void)
{
 int int_size (void);
 
 printf ("Number of bits in integer is %i", int_size());
 
 return 0;
}