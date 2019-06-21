// Reverse chars in an array, using pointers

#include <stdio.h>
#include <string.h>

#define PHRASES 6

char phraseD[] = "A";  // Simple test phrases
char phraseE[] = "AB"; // Even length string
char phraseF[] = "ABC"; // Odd length string
char phraseA[] = "AManAPlanACanalPanama";
char phraseB[] = "NotAPalindrome";
char phraseC[] = "Kayak";

char * phrases[PHRASES] = { phraseA, phraseB, phraseC,
			phraseD, phraseE, phraseF };
		  					

void reverse(char []); // Prototype

int main() {
	char * * phrasePtr;

	for (phrasePtr = phrases; phrasePtr < &phrases[PHRASES]; phrasePtr++) {
		printf("%s\n", *phrasePtr);
		reverse(*phrasePtr);
		printf("%s\n\n", *phrasePtr);
	}
	return 0;
}

void reverse(char cA[]) {  // In place reversal of word
	char *left, *right, temp;
	left = cA;
	right = &cA[strlen(cA)-1];
	for ( ; left < right ; left++, right--) {
		temp = *left;
		*left = *right;
		*right = temp;
	}
}





