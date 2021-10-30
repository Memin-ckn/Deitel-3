#include <stdio.h>
#include <stdlib.h>

/*
Ba�la
�al��ma saatini int, saatlik �creti float olarak tan�mla s�f�ra e�itle
while saat -1 olmad��� s�rece
	printf/scanf saat girdisi al
	if saat 1- de�ilse
		printf/scanf maa� girdisi al
		e�er saat 40tan fazlaysa fazlal���n yar�s� + 40 saatlik maa� ekrana yazd�r
bitir
*/

int main(int argc, char *argv[]) {
	
	int saat=0;
	float maas=0;
	
	while(saat!=-1){
		
		printf("Calisma saatini girin: (Cikis icin -1):\n");
		scanf("%d",&saat);
		
		if(saat!=-1){
		
		printf("Calisanin saatlik ucretini girin ($00.00):\n");
		scanf("%f",&maas);
		
		printf("Calisanin maasi %f''dir.\n", saat > 40 ? 40*maas + (saat-40)*maas*1.5 : saat*maas);
		
		}
		
	}
		
	return 0;
}
