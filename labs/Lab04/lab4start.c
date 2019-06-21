// Count # of occurrences of "the" in a text file

#include <stdio.h> // Supports getchar() and printf()
#include <string.h> // library routines that handle "string"

#define isCharacter (c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9')

char word[30]; // Global array of char will hold 1 word

int get1Word();      // Prototype
char toLower(char c); // Prototype

int main() {
	int theCount = 0; int wordCount = 0;
	while(get1Word != 0)
	{
		if(word.compare
	}


	// Loop, getting 1 word per iteration from get1Word().
	// For a given word, convert each letter to lower case.
	// Is the word "the"?  Use strcmp()
	// Count total # words, and instances of "the"
	// How get out of loop?

	printf("%d instances of \"the\" and %d words overall\n", theCount, wordCount);
	return 0;
}

char toLower(char c) {
	// If (and ONLY if) a character is in range 'A' thru 'Z', convert it to l.c.
	if(c >= 'A' && c <= 'Z')
		c+=32; 
	return (c);
}

int get1Word() { // Get 1 word into global word[] array
	char c;
	int charsInWord = 0;
	unsigned short wordBegun = 0;
	while((c = getchar()) != EOF) {
		if(isCharacter)
		{
			word
		}
	}

	// Loop to gobble letters in a word.  What if there's leading white space?
	// How handle hitting EOF?  How know if char is valid component of a "word?"

	return charsInWord; // return # valid chars in word[], 0 if hit EOF
}


