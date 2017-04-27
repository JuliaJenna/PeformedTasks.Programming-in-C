#include <stdio.h>
struct entry
 {
	int 		 value;
	struct entry *next;
 };
// Function removes an entry from a linked list.
// Функция удаляет элемент из связанного списка после указанного элемента в списке.
void removeEntry (struct entry *entry_pointer)
{
 (*entry_pointer).next = (*entry_pointer).next->next;
}
int main (void)
{
 struct entry n1, n2, n3, n4, n0;
 struct entry *list_pointer = &n1;
 void removeEntry (struct entry *entry_pointer);
 
 n1.value = 100;
 n2.value = 200;
 n3.value = 300;
 n4.value = 400;
 n1.next = &n2;
 n2.next = &n3;
 n3.next = &n4;
 n4.next = (struct entry *) 0;
 removeEntry (&n1);
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->next;
 }
 // First entry deletion.
 // Удаление первого элемента списка
 n1.value = 100;
 n2.value = 200;
 n3.value = 300;
 n4.value = 400;
 n1.next = &n2;
 n2.next = &n3;
 n3.next = &n4;
 n4.next = (struct entry *) 0;
 
 n0.value = 0;
 n0.next = &n1;
 removeEntry (&n0);
 list_pointer = &n0;
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->next;
 }
 
 return 0;
}

