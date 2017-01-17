#include <stdio.h>
#include <stdlib.h>
#include "dot.h"

/*  Compile by
gcc main.c dot.c -o main
*/


void scanV(double v[], int num) {
	int i;
	for (i = 0; i < num; i++) {
		scanf(" %lf", &(v[i]));
		}
	}

int main(int argc, char* argv[]) {
	int vLen = 0;
	double *v1;
	double *v2;
	double dot1, dot2;
	if ((argc <= 1)) { 
		printf("Specify how many numbers in each vector as first command line argument\n");
		return -1;
	}
	if (!(vLen = atoi(argv[1]))) {
		printf("Computes the dot product of two arbitrary length vectors of real numbers\n");
		printf("First command line argument must be an integer indicating vector lengths\n");
		return -1;
	}
	else{
		printf("%d\n", vLen);
	}
	v1 = (double*) malloc(vLen * sizeof(double));
	v2 = (double*) malloc(vLen * sizeof(double));

	printf("Enter a vector of %d numbers on one line separated by spaces\n", vLen);
	scanV(v1, vLen);

        printf("Enter a vector of %d numbers on one line separated by spaces\n", vLen);
	scanV(v2, vLen);
	
	//need to print out the two vectors to make sure shit isn't fucked up at this point
	//printf("<%lf, %lf, %lf, %lf>\n", v1[0], v1[1], v1[2], v1[3]); //**RETURNS <2.000000, 3.000000>**
	//printf("<%lf, %lf, %lf, %lf>\n", v2[0], v2[1], v2[2], v2[3]); //**RETURNS <4.000000, 1.000000>**
	//from doing this i found out that the problem is not with scanning in the numbers.

	dot1 = dot(v1, v2, vLen);
	dot2 = dot(v2, v1, vLen);

	printf("The first dot product: %.3lf should be the same as the second: %.3lf, right?\n", dot1, dot2);

	return 0;
	}
	

