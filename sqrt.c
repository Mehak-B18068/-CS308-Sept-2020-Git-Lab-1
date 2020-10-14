/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//The program starts here
int main(int argc, char* argv[]) {
	//If No input
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	//Input Provided
	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
