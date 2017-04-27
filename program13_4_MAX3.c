// The program defines and tests a macro MAX3 that gives the maximum of three values.
// Программа задаёт и тестирует макрос MAX3, который находит наибольшее из трёх значений.

#define MAX(a,b) ( ((a)>(b)) ? (a) : (b) )
#define MAX3(a,b,c) ( ((MAX(a,b)) > c) ? (MAX(a,b)) : (c) )
#include <stdio.h>

int main (void)
{
 int limit;
 
 limit = MAX3(5, 9, 0);
 printf("%i\n", limit);
 limit = MAX3(5+10, 9, 20);
 printf("%i\n", limit);
 limit = MAX3(5, 9, 2)*100;
 printf("%i\n", limit);
 limit = MAX3(1&2, 9, -2);
 printf("%i\n", limit);
 return 0;
}