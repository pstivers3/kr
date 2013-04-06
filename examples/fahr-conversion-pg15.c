/* re-write the temperature conversion program on pg 15 to use a 
 * function for conversion */

#include <stdio.h>
#define LOWER   0		/* lower limit of table */
#define UPPER 300		/* upper limit */
#define STEP   20		/* step size */

int main(void){

	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
    
	return 0;
}