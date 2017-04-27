// Program defines a type FunctionPtr that represents a pointer to a function that returns an int and that takes no arguments.
// Программа демонстрирует пример создания типа FunctionPtr, который представляет указатель на функцию, не принимающую никаких аргументов, и возвращающую значение типа int.

typedef int (*FunctionPtr) (void);

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
 int test;
 FunctionPtr Size;
 int int_size (void);
 Size = int_size;
 
 test = Size();
 printf ("Testing type FunctionPtr variable. Integer size is %i", test);
 
 return 0;
}