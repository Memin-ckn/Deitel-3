#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* 10 sayıdan en büyüğünü yazdırma programı: 

sayici değişkeni sıfıra ata
sayi değişkeni sıfıra ata
enBuyuk değişkeni sıfıra ata
	sayici 10dan küçük olduğu sürece
		sayı girdisi al ve sayici'yi 1 artır
		
		sayi > enbuyuk ise
			enbuyuk değişkenini sayi'ya eşitle

enbuyuk değişkenini yazdır 

*/


int main(int argc, char *argv[]) {
	
	int sayici = 0;
	int sayi = 0;
	int enBuyuk = 0;
	
	while (sayici < 10){
		printf("Bir Sayi Giriniz:\n");
		sayici +=1;
		scanf("%d",&sayi);
		
		if (sayi > enBuyuk){
			enBuyuk = sayi;
		}
		
	}
	
	printf("En buyuk girdi = %d", enBuyuk);
	
	
	return 0;
}
