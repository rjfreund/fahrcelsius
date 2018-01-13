#include <stdio.h>

#define	LOWER	0	/* lower limit of table */
#define UPPER	300	/* upper limit */
#define STEP	20	/* step size */

double toCelsius(double fahr){
	double celsius = (fahr - 32) / 1.8;
	return celsius;
}

int main(){

	for(int fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%3d %6.1f\n", fahr, toCelsius(fahr));
	}

	return 0;
}
