// Functions insertEntry and removeEntry functions for a doubly linked list.
// Функции insertEntry и removeEntry для двойного связанного списка. doubly linked list
#include <stdio.h>
 struct entry
 {
	int value;
	struct entry *next;
	struct entry *previous;
 };
// Function inserts a new entry into a linked list. Can't accomplish insertion at the end of the list.
// Функция вставляет новый элемент в двойной связанный список.
// Использует только указатель на член связанного списка, следующий после вставки; не позволяет сделать вставку в конец списка.
void insertEntry (struct entry *insert, struct entry *after_insert)
{
(*insert).next = &(*after_insert);
(*insert).previous = (*after_insert).previous;
(*after_insert).previous->next = &(*insert);
(*after_insert).previous = &(*insert);
}
// Function removes an entry from a doubly linked list.
// Функция удаляет указанный элемент из двойного связанного списка
void removeEntry (struct entry *entry_to_delete)
{
 (*entry_to_delete->previous).next = (*entry_to_delete).next;
 (*entry_to_delete->next).previous = (*entry_to_delete).previous;
}
int main (void)
{
 struct entry n1, n2, n3, n4, n2_3, n5, nlast;
 n2_3.value = 70000;
 nlast.next = (struct entry *) 0;
 nlast.previous = &n4;
 struct entry *list_pointer = &n1;
 void insertEntry (struct entry *insert, struct entry *after_insert);
 void removeEntry (struct entry *entry_to_delete);
 
 n1.value = 100;
 n1.next = &n2;
 n1.previous = (struct entry *) 0; // Возможно, здесь значение и не нужно.
 n2.value = 200;
 n2.next = &n3;
 n2.previous = &n1;
 n3.value = 300;
 n3.next = &n4;
 n3.previous = &n2;
 n4.value = 400;
 n4.next = (struct entry *) 0; //Закончить список нулевым указателем.
 n4.previous = &n3;
 n5.value = 500;
 insertEntry(&n2_3, &n3);
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->next;
 }
 printf ("\n");
 //removeEntry(&n2);
 list_pointer = &n4;
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->previous;
 }
 printf ("\n");
 
 insertEntry(&n5, &nlast);
 list_pointer = &n1;
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->next;
 }
 printf ("\n");
 list_pointer = &n5;
 while (list_pointer != (struct entry *) 0 ) {
 printf ("%i\n", list_pointer->value);
 list_pointer = list_pointer->previous;
 }
 
 return 0;
}