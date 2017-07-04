// Program shows example of  using malloc.
// ��������� ������������� ������ ������������� ������� malloc.

// Program adds new element to the end of linked list.
// ��������� ��������� ����� ������� � ����� ���������� ������.

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

struct entry
{
	int 		 value;
	struct entry *next;
};

// Function adds new element to the end of linked list.
// ������� ��������� ����� ������� � ����� ������.

struct entry *addEntry (struct entry *listPtr)
{
	// find the end of the list
	// ������� ����� ������
	while ( listPtr->next != NULL )
	listPtr = listPtr->next;
	
	// get storage for new entry
	// �������� ����� � ������ ��� ������ ��������
	
	listPtr->next = (struct entry *) malloc (sizeof (struct entry));
	
	// check if malloc failed
	// ���������, ������� �� ��������� �������� ������

	if (listPtr->next == NULL)
	{
		printf ("Malloc failed\n");
		exit (EXIT_FAILURE);
	}
	
	// add null to the new end of the list
	// ��������� ������� ������ � ����� ����� ������
	
	if (listPtr->next != NULL )
		(listPtr->next)->next = (struct entry *) NULL;
	return listPtr->next;
}

int main (void)
{
	struct entry n1, n2, n3;
	int i;
	struct entry *NPtr = &n1, *p, *e;
	struct entry *addEntry (struct entry *listPtr);
	
	// ������ ��������� ������
	
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
 
	n1.next = &n2;
	n2.next = &n3;
	n3.next = (struct entry *) 0;
	
	// add new entry to end of linked list
	// ��������� ����� ������� � ����� ������
	
	p = addEntry (NPtr);

	p->value = 400;
	
	e = &n1;
	for (i = 0; e != NULL; ++i)
	{
		printf ("%i\n", e->value);
		e = e->next;
	}
	printf ("\n");
		
	free (p);
	
	return 0;
}