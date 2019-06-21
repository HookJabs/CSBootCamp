#include <stdio.h>
// Readable hex output of int digits, recursive 
void putMSDigit(long int outVal) {
	char temp;
	if (outVal >= 16) 
		putMSDigit(outVal / 16);
	temp = (char)(outVal % 16);
	putchar(temp > 9 ? 'A'+(temp-10) : '0'+temp); 
}

int main() {
	putMSDigit(0xA5B7);
	return 0;
}

