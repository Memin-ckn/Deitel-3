#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 10;
	
	printf("%d\n",++x); // �nceden ekleyip yazd�r�r.
	printf("%d\n\n",x); // Kontrol i�in.
	
	printf("%d\n",x++); //Yazd�rd�ktan sonra ekler.
	printf("%d\n\n",x); // Kontrol i�in.
	
	printf("%d\n",--x); // �nceden ��kart�p yazd�r�r.
	printf("%d\n\n",x); // Kontrol i�in.
	
	printf("%d\n",x--); //Yazd�rd�ktan sonra ��kart�r.
	printf("%d\n\n",x); // Kontrol i�in.
		
	return 0;
}
