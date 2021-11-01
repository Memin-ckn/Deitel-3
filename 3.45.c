#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y,z;
	
	printf("3 pozitif sayi giriniz.\n");
	scanf("%f %f %f",&x,&y,&z);
	
	if(x>0 && y>0 && z>0){
	
		if((x*x)+(y*y)==(z*z)){
			printf("Bu bir dik ucgendir.\n");
		}
		else printf("Bu bir dik ucgen olamaz.\n");
	}
	else printf("Lutfen pozitif sayilar giriniz.\n");
	
	return 0;
}
