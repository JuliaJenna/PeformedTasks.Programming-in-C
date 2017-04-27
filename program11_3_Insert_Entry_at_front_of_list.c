// Program inserts a new entry at the front of the list.
// Программа вставляет новый элемент в начало связанного списка.
#include <stdio.h>
struct entry
 {
	int 		 value;
	struct entry *next;
 };
// Function inserts a new entry into a linked list.
// Функция вставляет новый элемент в связанный список.
void insertEntry (struct entry *insert, struct entry *before_insert)
{
(*insert).next = (*before_insert).next;
(*before_insert).next = &(*insert);
}
int main (void)
{
 struct entry n1, n2, n3, n0_1, n0;
 n0.next = &n1;
 void insertEntry (struct entry *insert, struct entry *before_insert);
 
 n1.value = 100;
 n2.value = 200;
 n3.value = 300;
 n1.next = &n2;
 n2.next = &n3;
 insertEntry (&n0_1, &n0);
 n0_1.value = 500;
 
 printf ("%i\n", n0_1.value);
 printf ("%i\n", *n0.next);
 printf ("%i\n", *n0_1.next);
 
 return 0;
}