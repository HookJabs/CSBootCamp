// pointers.c -- Some sample code identical to the PPT
// slides used in lecture.
//

#include <stdio.h>

// Declaring the args as pointers to int, allows the
// function to access variables outside the local scope
void swap(int *a, int *b) {
	int temp;
	temp = *a; // Reaching out to whatever int 'a' is pointing to...
	*a = *b;
	*b = temp;
}

int main() {

    // Slide demonstrating pointer declaration/initialization
	int x = 5;
	int *iPtr = &x;
	// This printf shows the MEMORY ADDRESS held in iPtr
	printf("iPtr = %lx\n", (unsigned long int)iPtr);
	// * dereference operator shows what's POINTED TO by iPtr
	printf("*iPtr = %d\n", *iPtr);
	
	*iPtr = *iPtr + 5; // This line AND the next one make
	x *= 3;		   //  changes to the same int variable
	// Address held in iPtr remains unchanged
	printf("iPtr = %lx\n", (unsigned long int)iPtr);
	// What iPtr is pointing to HAS changed
	printf("*iPtr = %d\n", *iPtr);  

    // Slide demonstrating assignment of pointers
	x = 5;
	int y = 10;
	int *pA = &x, *pB = &y; // Each ptr points to separate int
	printf("*pA = %d *pB = %d\n", *pA, *pB);
	pA = pB;  // pA set equal to pB means BOTH now addressing 'y'
	x = 20;
	y = 30;   // 'y' set to 30
	*pA = x;  // 'y' now set to 20, since pA is addressing 'y'
	printf("*pA = %d *pB = %d\n", *pA, *pB);

    // Slide demonstrating pointer as function argument
	x = 2, y = 4;
	printf("%d, %d\n", x, y); // Before
	swap(&x, &y); // Pass ADDRESSES of 'x' and 'y'
	printf("%d, %d\n", x, y); // After

    // Slide demonstrating pointer working with array
	int iArray[5] = { 1,2,3,4,5 };
	int *iP = iArray; // An array's name IS a pointer to 0th element
	*iP == 1; // True. Looking at [0th] element
	*(iP + 2) == 3; // True. [2nd] element
	iP += 3; // Now have CHANGED pointer
	*iP == 4; // True.
	*(iP - 1) = 30;
	// Typical use of pointer to access array's content
	//    - set ptr at base of array
	//    - test to see if ptr has reached last element of array
	//    - increment pointer, which makes it access the next element
	for (iP = iArray; iP <= &iArray[4]; iP++)
		printf("%d ", *iP);

	return 0;
}
