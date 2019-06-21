#include <stdio.h>

int main() {
/*
to run:
in dir:
gcc -Wall Lab1.c
./a.out < sample1.txt
*/
	int numChars=0, numNums=0;
	char c;

	while((c=getchar()) != EOF) {

		if(c > 47 && c < 58) {
			numNums++;
		}
		numChars++;
	};
	printf("# Numerals: %d, # Chars: %d, Percent Numerals: %.2f\n", numNums, numChars, (float)numNums/numChars*100);
	return 0;
}
