// Function searches the integer source, starting at the leftmost bit, to see if the rightmost n bits of pattern occur in source. 
// The function returns the number of the bit at which the pattern begins. If the pattern is not found, then the function returns –1.
// Функция ищет заданный шаблон из n правых битов переменной pattern внутри переменной типа unsigned int.
// Eсли совпадение найдено, выдаёт номер бита, с которого начинается найденный отрезок, нумерация битов при этом ведётся слева (0 - крайний левый бит). Если совпадение не найдено, выдаёт значение -1.
int bitpat_search (unsigned int source, unsigned int pattern, int n)
 {
 unsigned int check = 0, search;
 int size, found = -1, i, j = 0;
 int int_size (void);
 int bit_test (unsigned int number, int n);
 
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
 
 /* Finds first nonzero bit and shifts start of numeration on it. Находит первый ненулевой бит и сдвигает точку отсчёта нумерации битов на него.
 for (i = 0, check = 0; check != 1; ++i)
 check = bit_test(source, i);
 found = found - i + 1;
 */
 
 return found;
 }