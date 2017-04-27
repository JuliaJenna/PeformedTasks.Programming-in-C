#include <stdio.h>

// Function sorts three integers into ascending order.
// Функция сортирует три целочисленных переменных в возрастающем порядке.
 void sort3 (int a, int b, int c)
 {
 int *p1, *p2, *p3;
 
 	p1 = &a;
	p2 = &b;
	p3 = &c;
 printf ("Before sorting: %i, %i, %i \n", a, b, c);
	
 if ( a > b) {
 	if ( b > c) { // a>b>c
	 p1 = &c;
	 p2 = &b;
	 p3 = &a;
	 }
	else if ((a > c) && (c > b)) {	// a>c>b
	 p1 = &b;
	 p2 = &c;
	 p3 = &a;
	 }
	else if (b==c) {
	p1 = &b;
	p2 = &c;
	p3 = &a;
	}
	else {	 			// if ( c > a > b)
	 p1 = &b;
	 p2 = &a;
	 p3 = &c;
	 }
	}
 else if ( a < b ) {
	if (c > b) {	// c>b>a .
	p1 = &a;
	p2 = &b;
	p3 = &c;
	}
	else if ((b > c) && (c > a)) {	// b>c>a
	p1 = &a;
	p2 = &c;
	p3 = &b;
	}
	else if (b==c) {
	p1 = &a;
	p2 = &b;
	p3 = &c;
	}	
	else { 				// b>a>c
	p1 = &c;
	p2 = &a;
	p3 = &b;
	}
}
 else if ( a == b) {
 	if ( b > c) { // a=b>c 
	 p1 = &c;
	 p2 = &a;
	 p3 = &b;
	}	
	else if ( b < c) { // a=b<c 
	 p1 = &a;
	 p2 = &b;
	 p3 = &c;
	}
 }
 printf ("After sorting: %i, %i, %i \n", *p1, *p2, *p3);
}

int main (void)
{
 void sort3 (int a, int b, int c);
 
 sort3(3,7,1);
 sort3(0,7,5);
 sort3(21,27,25);
 sort3(9,11,13); 
 sort3(4,2,1); 
 sort3(13,4,6); 
 sort3(10,6,13); 
 sort3(1,1,1);
 sort3(1,1,2);
 sort3(1,2,2);
 sort3(2,1,2);
 return 0;
}