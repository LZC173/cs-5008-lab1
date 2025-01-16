#include <stdio.h>
// Function: power
// Purpose: call a power of a number
// Return: a long integer
long power(int base, unsigned int n) {
	long result =
	    1;	// result start from zero since every number's power of 0 is 1
	for (unsigned int i = 0; i < n; i++) {
		result = result * base;	 // times base for this loop
	}
	return result;
}
// Function: main
// Purpose: call power function in a loop to test it compute from power(2,1) to
// power(2,10) Return: a series of string output
int main() {
	int i, result;
	for (i = 1; i < 11; ++i) {
		result = power(2, i);
		printf("2 to the power of %d is %d.\n", i, result);
	}
}

