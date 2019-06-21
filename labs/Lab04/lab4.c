// Count # of occurrences of "the" in a text file

#include <stdio.h> // Supports getchar() and printf()
#include <string.h> // library routines that handle "string"

char word[30]; // Global array of char will hold 1 word

int get1Word();      // Prototype
char toLower(char c); // Prototype

int main() {
	int theCount = 0, wordCount = 0;
	int charCount, ix;

	while ((charCount = get1Word()) != 0) {
		wordCount++;
		for (ix = 0; ix < charCount; ix++)
			word[ix] = toLower(word[ix]);
		if (strcmp(word, "the") == 0)
			theCount++;
		printf("%s\n", word);
	}
	printf("%d instances of \"the\" and %d words overall\n", theCount, wordCount);
	return 0;
}

char toLower(char c) {
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

int get1Word() { // Get 1 word into global word[] 
	int charsInWord = 0;
	char thisChar;
	int  wordBegun = 0;

	while ((thisChar = getchar()) != EOF) {
		if (   ((thisChar >= 'A') && (thisChar <= 'Z'))
		    || ((thisChar >= 'a') && (thisChar <= 'z'))
		    || ((thisChar >= '0') && (thisChar <= '9'))  ) {
			wordBegun = 1;
			word[charsInWord++] = thisChar;
			continue;
		}
		if (wordBegun)
			break;
	}
	word[charsInWord] = '\0';
	return charsInWord; // return # valid chars in word[]
}


