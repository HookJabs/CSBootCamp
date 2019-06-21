//definition for the prototype in the header
long int factorial(int i) {
	long int result = 1; // Handles args of either 0 or 1
	while (i > 1) 
		result *= i--;
	return(result);
}
