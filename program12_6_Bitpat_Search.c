// Program looks for the occurrence of a specified pattern of bits inside an unsigned int.
// ��������� ��� ������ ������� �� ����� � �������� ������������� ���������� ���� unsigned int
#include <stdio.h>
// ������� ���������� ����� ����� � ���� unsigned int
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
// ������� ���������� ��������� ���� � ������� n. 
// 0 ��������� �� ������� ����� ���.
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
 // ������� �����������e� ��� � ������� n � �������.
 // The function returns the result of turning bit n on inside the integer.
unsigned int bit_set (unsigned int word, int n)
 {
	int size;
	int int_size (void);
	
	size = int_size ();
	if ( n < 0 || n > size)
		return 0;
		
  return word | (1 << n);
 }
// Function searches the integer source, starting at the leftmost bit, to see if the rightmost n bits of pattern occur in source. 
// The function returns the number of the bit at which the pattern begins. If the pattern is not found, then the function returns �1.
// ������� ���� �������� ������ �� n ������ ����� ���������� pattern ������ ���������� ���� unsigned int.
// E��� ���������� �������, ����� ����� ����, � �������� ���������� ��������� �������, ��������� ����� ��� ���� ������ ����� (0 - ������� ����� ���). ���� ���������� �� �������, ����� �������� -1.
int bitpat_search (unsigned int source, unsigned int pattern, int n)
 {
 unsigned int check = 0, search;
 int size, found = -1, i, j = 0;
 int int_size (void);
 unsigned int bit_set (unsigned int word, int n);
 
 size = int_size();
 if (n > size)
 n = n % size;
 
 i = size - n;
 while (( i > -1) && (j != -1)) {
  check = pattern << i;
  search = source & check;
  if ( search == check)
  found = j;
  i--;
  ++j;
 }
 
 /* Finds first nonzero bit and shifts start of numeration on it. ������� ������ ��������� ��� � �������� ����� ������� ��������� ����� �� ����.
 for (i = 0, check = 0; check != 1; ++i)
 check = bit_test(source, i);
 found = found - i + 1;
 */
 
 return found;
 }

int main (void)
{
 int index;
 int bitpat_search (unsigned int source, unsigned int pattern, int n);
 
 index = bitpat_search (0xe1f4, 0x5, 3);
 printf("%i\n", index);
 
 return 0;
}