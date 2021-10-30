#include <stdio.h>
#include <stdlib.h>

/*
Baþla
çalýþma saatini int, saatlik ücreti float olarak tanýmla sýfýra eþitle
while saat -1 olmadýðý sürece
	printf/scanf saat girdisi al
	if saat 1- deðilse
		printf/scanf maaþ girdisi al
		eðer saat 40tan fazlaysa fazlalýðýn yarýsý + 40 saatlik maaþ ekrana yazdýr
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
