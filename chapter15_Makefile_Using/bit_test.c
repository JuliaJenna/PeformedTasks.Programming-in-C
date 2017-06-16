// Функция определяет состояние бита с номером n. 
// 0 указывает на крайний левый бит.
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