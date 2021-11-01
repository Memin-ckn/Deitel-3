#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r = 0;
	float pi = 3.14159;
	
	printf("Cemberin yaricapini girin.");
	scanf("%f",&r);
	
	printf("Cemberin capi: %f\n",r*2);
	printf("Cemberin cevresi: %f\n",2*pi*r);
	printf("Cemberin alani: %f\n",pi*(pow(r,2)));
	
	return 0;
}
