#include <stdio.h>
long int factorial(int f) {
	long int rslt = 1;
	for(; f > 0; f--) {
		rslt*=f;
	}
	return rslt;
}
int main() {
	int i;
	for(i = 0; i < 21; i++)
	{
		long int factorialRes = factorial(i);
		printf("factorial of %d is: %ld.\n", i, factorialRes);
	}

	return 0;
}
