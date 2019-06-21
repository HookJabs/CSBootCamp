// If passed an ASCII char between a and z inclusive,
// make it U.C. by use of a bit mask.

char myUpperCase(char c) { 
	if (c >= 'a' && c <= 'z')
		c &= ~0x20; // Bit operator, mask off hex 20
	return c;
}
