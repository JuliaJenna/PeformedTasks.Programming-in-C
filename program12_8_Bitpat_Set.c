// Program sets a specified set of bits to a particular value.
// ��������� ������������� � �������� ���� ��������������� ��������.
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
// ������� ��������� �������� ������������������ ����� (������ n) �� ���������� ���� unsigned int. ��������� ����� ��� ���� ������ ����� (0 - ������� ����� ���).
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

// ������� ������������� � �������� ���� ��������������� ��������.
// n - ����� ��������������� �����; � insert ���� ��� ��������� ��������� �� ������� ����; startBit - ����� ���� � recipient, ��� ���� 0 - ������� ����� ���.
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