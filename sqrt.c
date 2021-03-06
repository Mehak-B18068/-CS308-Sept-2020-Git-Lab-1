/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//The program starts here
int main(int argc, char* argv[]) {
	//If No input
	if (argc != 2) {
		printf("DEBUG:Usage: sqrt input\n\n");
		exit(-1);
	}
	
	//Input Provided
	//Check number input
	char* userInputStr;
	userInputStr = argv[1];
    	for ( int x = 0;userInputStr[x]!='\0' ; x++)
    	{
        if (isalpha(userInputStr[x]))
        {

            printf("Invalid input.NaN\n");

          	exit(-1);

            
        }

    	}
	int input = atoi(argv[1]);
	//Checking for negative number
	/*if(input<0)
	{
	printf("NaN\n");
		exit(-1);
	}*/
	if(input<0)
	printf("DEBUG:Sqrt of %d is %.3fi\n",input,sqrt(abs(input)));
	else
	printf("DEBUG:Sqrt of %d is %.3f\n",input,sqrt(input));
	printf("DEBUG:End of program. Exiting.\n");
	return(0);

} // end main
