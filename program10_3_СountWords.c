// Program implements and shows examples of using of extended function countWords.
// Программа демонстрирует применение функции countWords, подсчитывающей число слов в строке.

#include <stdio.h>
#include <stdbool.h>
// Function determines if a character is alphabetic.
// Функция определяет, является ли символ буквой.
bool alphabetic (const char c)
{
	if ( (c>= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z') || ( c == '\'') || (c>= '0' && c <= '9') )
	 return true;
	else
	return false;
}

/* Function to count the number of words in a string. Correctly counts a word that contains an apostrophe as a single word. Сountы a sequence of positive or negative numbers, including any embedded commas and periods, as a single word. */
/* Функция считает число слов в строке. Корректно определяет слово с апострофом как одно слово. Считает положительные и отрицательные числа,  в том числе содержащие запятые и точки, как одно слово. */
int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);
	for (i = 0; string[i] != '\0'; ++i )
		if (  (alphabetic(string[i]) ) || ( ( ( string[i] == '.') || ( string[i] == ',') || ( string[i] == '-' ) ) && alphabetic(string[i+1]) ) )
		{
		 if (lookingForWord )
		 {
		  ++wordCount;
		  lookingForWord = false;
		 }
		}
		else
		  lookingForWord = true;
		return wordCount;
}

int main (void)
{
 const char text1[] = "Well, here goes apostroph's action.";
 const char text2[] = "And here we go... again.";
 const char text3[] = "3.5 16,8 -4 - 7";
 int countWords (const char string[]);
 
 printf ("%s - words = %i\n", text1, countWords(text1));
 printf ("%s - words = %i\n", text2, countWords(text2));
 printf ("%s - words = %i\n", text3, countWords(text3));
 
 return 0;
}