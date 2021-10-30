#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 10;
	
	printf("%d\n",++x); // Önceden ekleyip yazdýrýr.
	printf("%d\n\n",x); // Kontrol için.
	
	printf("%d\n",x++); //Yazdýrdýktan sonra ekler.
	printf("%d\n\n",x); // Kontrol için.
	
	printf("%d\n",--x); // Önceden çýkartýp yazdýrýr.
	printf("%d\n\n",x); // Kontrol için.
	
	printf("%d\n",x--); //Yazdýrdýktan sonra çýkartýr.
	printf("%d\n\n",x); // Kontrol için.
		
	return 0;
}
