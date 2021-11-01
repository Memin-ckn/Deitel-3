#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x, y, z;
	
	printf("Uc sayi giriniz:\n");
	scanf("%f %f %f",&x,&y,&z);
	
	if(x+y>z && abs(x-y)<z){
		printf("Bu bir ucgen olabilir.\n");
	}
	else printf("Bu bir ucgen olamaz.\n");
	
	return 0;
}
