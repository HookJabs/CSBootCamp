// Working with pointers...

// There are two tasks involved.  FIRST, write
// a reverse() function that uses pointers
// to do an in-place reversal of the order of
// the chars within a string (which is a char[] ).
// Test your function by using a simple main()
// that invokes your reverse() on the first
// test phrases shown below.

// SECOND, write a more complicated main() that
// uses a for() loop to iterate through the 
// line[] array.  

#include <stdio.h>
#include <string.h>

// A few char[] phrases to test your function.

char phraseD[] = "A";  // Simple test phrases
char phraseE[] = "AB"; // Even length string
char phraseF[] = "ABC"; // Odd length string
char phraseA[] = "AManAPlanACanalPanama";
char phraseB[] = "NotAPalindrome";
char phraseC[] = "Kayak";


// Here's the phrases[] array.  It is an array of
// POINTERS, with each pointer referencing a
// distinct phrase.  To iterate through this
// array, you'll use a variable of type char * *
// I.e., a variable that is a pointer to ANOTHER
// pointer.

#define PHRASES 6
char * phrases[PHRASES] = { phraseA, phraseB, phraseC,
			phraseD, phraseE, phraseF };
		  					

void reverse(char []); // Prototype of your function

int main() {
	// Your main for the FIRST part of the lab...

	printf("%s\n", phraseB);
	reverse(phraseB); // Example of simple call
	printf("%s\n", phraseB);

	char** pPtr = phrases;//points at char pointers, we point it at the array of pointers, phrases

	// Here's the SECOND part of the lab...
	// What variables are needed?
	// How should variables be initialized?
	// What is the expression used to test for loop completion?
	// How adjust variables each time through the loop?
	// How to use variable(s) to access the line[] array?
	int i;
	for (i=0; i < 5  ; i++) {
		printf("%s\n", *pPtr);
		reverse( *pPtr );
		printf("%s\n\n", *pPtr);
		pPtr++;
	}
	return 0;
}

void reverse(char cA[]) {  // In place reversal of chars in a string
	char* left = cA;
	char* right = left;
	right += strlen(cA)-1;
	while(left <= right) {
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}





