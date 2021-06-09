/* A program to compute the gravitational field strength of a planetoid,
given its radius and mass.  The license here is the "free as a byrd" license. */

#include<stdio.h>
#include<math.h>

int main(){

	float G = 6.67E-11;
  float mass, radius, g;

	printf("Please enter the mass of the planetoid for the calculation: \n");
	scanf("%f", &mass);
	printf("Please enter the radius of the planetoid for the calculation: \n");
	scanf("%f", &radius);

      g = G*mass/(radius*radius);

	printf("The gravitational field strength of the planetoid is: \n");
	printf("%f", g);



	/*printf("... and 2 raised to the power 3 is: \n");
	printf("%f", power(2.5, 3.2));
	*/

	return 0;
}
