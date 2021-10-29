#include <stdio.h>
#include <stdlib.h>

/*
Başla
hesap değişkenini int; bakiye, harcama, kredi ve limit değişkenlerini float olarak tanımla
hesap -1 olmadığı sürece while döngüsü başlat
	hesap numarası girdisi iste/al
	hesap -1 değilse(if)
		ilk bakiye, harcama, kredi ve limit girdisi al
		son bakiye hesaplat
		if bakiye limitten büyükse
			limit aşıldı yazdır
Bitir
*/

int main(int argc, char *argv[]) {
	
	int hesap=0;
	float bakiye=0, harcama=0, kredi=0, limit=0;
	
	while(hesap!=-1){
		
		printf("Hesap numarasini girin (Cikis icin -1):\n");
		scanf("%d",&hesap);
		
		if(hesap!=-1){
			
			printf("Ilk bakiyeyi girin:\n");
			scanf("%f",&bakiye);
			
			printf("Toplam harcamalari girin:\n");
			scanf("%f",&harcama);
			
			printf("Toplam kredileri girin:\n");
			scanf("%f",&kredi);
			
			printf("Kredi limitini girin:\n");
			scanf("%f",&limit);
			
			bakiye=bakiye + harcama - kredi;
			if(bakiye>limit){
				
				printf("Hesap numarasi: %d\nKredi limiti: %f\nBakiye: %f\nKredi limiti asildi.\n",hesap, limit, bakiye);
				
			}
			
		}
		
	}
	
	return 0;
}
