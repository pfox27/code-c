/* This program calculates the circumference, the volume and the surface area of a planet of given radius. */

#include <stdio.h>
#include <string.h>
#include <math.h>
//#include <conio.h>

extern char planet;
extern double pi,radius, circumference, volume, area;


int main (void){
	
	char planet[25];
	double radius, mass, g;
	double circumference;
	double volume, G;
	double area, pi;

	printf("Please Enter the planet name: \n");
	scanf("%s", planet);
	printf("Please enter the mass of the planet in kilograms: ");
	scanf("%lf", &mass);
	printf("Please Enter the planet radius in metres: \n");
	scanf("%lf", &radius);
	
	G = 6.67e-11;
	pi = 3.1415927;
	circumference = 2 * pi * radius;
	volume = pi * radius * radius;
	area = 4 * pi * radius * radius;
	g = G * mass / pow(radius, 2);

	printf("The circumference of %s", planet);
	printf(" is %.2e  metres.\n", circumference);
    printf("The volume of %s", planet); 
	printf(" is %.2e m^3.\n", volume);
	printf("The surface area of %s", planet);
	printf(" is %0.2e m^2.\n", area);
	printf("The gravitational field strength of %s", planet);
	printf(" is %.2f N/kg. \n", g);
	return 0;
}











