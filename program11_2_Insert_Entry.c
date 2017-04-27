// Program shows usage of pointers for inserting a new entry in a linked list.
// Программа демонстрирует использование указателей для вставки нового элемента в связанный список.
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
 struct entry n1, n2, n3, n2_3;
 struct entry *ptr2, *ptr2_3;
 ptr2 = &n2;
 ptr2_3 = &n2_3;
 void insertEntry (struct entry *insert, struct entry *before_insert);
 
 n1.value = 100;
 n2.value = 200;
 n3.value = 300;
 n1.next = &n2;
 n2.next = &n3;
 
 insertEntry (&n2_3, &n2);
 n2_3.value = 500;
 printf ("%i\n", n2_3.value);
 printf ("%i\n", *n2.next);
 printf ("%i\n", *n2_3.next);
 printf ("\n");
 /*
 insertEntry (ptr2_3, ptr2);
 n2_3.value = 500;
 printf ("%i\n", n2_3.value);
 printf ("%i\n", *((*ptr2).next));
 printf ("%i\n", *((*ptr2_3).next));
  */
 return 0;
}

