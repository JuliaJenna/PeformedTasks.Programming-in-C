// Program shows enumerated data type using.
// Программа демонстрирует использование перечислимого типа.

#include <stdio.h>
enum month { january, february, march, april, may, june, july, august, september, october, november, december };
// Function takes as its argument a value of type enum month and returns a pointer to a character string containing the name of the month.
// Функция принимает значение перечислимого типа и возвращает указатель на строку, содержащую имя месяца.

char *monthName (enum month aMonth)
 {
  int i;
  char *string;
  char *days[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

switch(aMonth) {
	case january:
	string = days[0];
	break;
	case february:
	string = days[1];
	break;
	case march:
	string = days[2];
	break;
	case april:
	string = days[3];
	break;
	case may:
	string = days[4];
	break;
	case june:
	string = days[5];
	break;
	case july:
	string = days[6];
	break;
	case august:
	string = days[7];
	break;
	case september:
	string = days[8];
	break;
	case october:
	string = days[9];
	break;
	case november:
	string = days[10];
	break;
	case december:
	string = days[11];
	break;
	default: 
	string = "Wrong value";
 }

 return string;   
 }

int main (void)
{
 char *smth;
 char *monthName (enum month aMonth);
 enum month aMonth;
 
 aMonth = june;
 smth = monthName(aMonth);
 printf ("%s\n", smth);
 
 return 0;
}