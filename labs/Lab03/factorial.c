#include <stdio.h>
#include "fact.h"
//long int factorial(int); //Prototype now in the .h
#define LOOPMAX 20



int main() {
	int ix;
	for (ix = 0; ix <= LOOPMAX; ix++)
		printf("%d\t%ld\n", ix, factorial(ix));
	return 0;
}


