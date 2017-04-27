// Program implements a small doubly linked list and prints out the elements of the list.
// Программа создаёт двойной связанный список и выводит элементы списка на экран.
#include <stdio.h>
int main (void)
{
 struct entry
 {
	int value;
	struct entry *next;
	struct entry *previous;
 };
 
 struct entry n1, n2, n3, n4;
 struct entry *list_pointer = &n1;
 
 n1.value = 100;
 n1.next = &n2;
 n1.previous = (struct entry *) 0;
 n2.value = 200;
 n2.next = &n3;
 n2.previous = &n1;
 n3.value = 300;
 n3.next = &n4;
 n3.previous = &n2;
 n4.value = 400;
 n4.next = (struct entry *) 0; //Заканчиваем список нулевым указателем. Finish the list with null pointer.
 n4.previous = &n3;
 
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->next;
 }
 list_pointer = &n4;
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->previous;
 }
 
 return 0;
}