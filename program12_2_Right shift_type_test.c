// Program determines whether the particular computer performs an arithmetic or a logical right shift.
// If right shift has effect of division, right shift is logical; if not, right shift is arithmetic.
// Программа определяет тип битового сдвига вправо на компьютере.
// Если сдвиг имеет эффект деления на 2, сдвиг логический; если нет - арифметический
#include <stdio.h>
int main (void)
{
 int w1 = -2;
 printf ("%i \n", w1);
 w1 = w1 >> 1;
 printf ("%i \n", w1);
 return 0;
}