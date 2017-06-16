// Program looks for the occurrence of a specified pattern of bits inside an unsigned int.
// ѕрограмма дл€ поиска шаблона из битов в двоичном представлении переменной типа unsigned int
#include <stdio.h>

int main (void)
{
 int index;
 int bitpat_search (unsigned int source, unsigned int pattern, int n);
 
 index = bitpat_search (0xe1f4, 0x5, 3);
 printf("%i\n", index);
 
 return 0;
}