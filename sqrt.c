/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// main function starts here.
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	char* in = argv[1];
	while(*in != '\0') {
		if(*in < '0' || *in > '9') {
			printf("Invalid input! Input must be a valid number.");
			return(0);
		}
		in++;
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.");
	return(0);

} // end main
