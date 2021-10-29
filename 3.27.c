#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayici = 0;
	int sayi = 0;
	int enBuyuk = 0;
	int buyuk = 0; // En buyuk ikinci sayi
	
	while (sayici < 10){
		printf("Bir Sayi Giriniz:\n");
		sayici +=1;
		scanf("%d",&sayi);
		
		if(sayi > enBuyuk){
			buyuk = enBuyuk;
			enBuyuk = sayi;
		}
		else if(sayi > buyuk){
			buyuk = sayi;
		}
		
	}
	
	printf("En buyuk iki girdi = %d, %d", enBuyuk, buyuk);
	
	
	return 0;
}
