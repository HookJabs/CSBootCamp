#include <stdio.h>

long int factorial(long int i) {
	if (i > 1) 
		return (i * factorial(i - 1));
	else return(1);
}

int main() {
	printf("%ld is 4!", factorial(4));
	return 0;
}

