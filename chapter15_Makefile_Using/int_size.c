// Function returns the number of bits contained in an int on particular machine.
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