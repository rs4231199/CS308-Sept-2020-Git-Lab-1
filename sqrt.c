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

	char* sign = "";
	char* in = argv[1];
	if(*in == '-') {
		sign = "-";
		in++;
	}

	char* tmp = in;
	while(*tmp != '\0') {
		if(*tmp < '0' || *tmp > '9') {
			printf("Invalid input! Input must be a valid number.");
			return(0);
		}
		tmp++;
	}

	int input = atoi(in);
	printf("NEGSUPPORT: Sqrt of %s%d is %f%s\n", sign, input, sqrt(input), (sign=="-" ? "i" : ""));
	printf("End of program. Exiting.");
	return(0);

} // end main
