#include <stdio.h>
#include <stdlib.h>

/*
Başla
galon, km, toplamKm ve toplamGalon değişkenlerini float olarak tanımla
galon -1 olmadığı sürece while döngüsü çalıştır
	galon için girdi iste/al
	galon -1 değilse km girdisi al km/galon yazdır (if)
		toplamkm ve toplamgalon işlemlerini yaptır
toplam ortalama yazdır
Bitir
*/

int main(int argc, char *argv[]) {
	
	float galon=0, km=0, toplamKm=0, toplamGalon=0;
	
	while(galon!=-1){
		
		printf("Kac galon benzin harcandi (cikis icin -1):\n");
		scanf("%f",&galon);
		
		if(galon!=-1){
		
		printf("Kac kilometre yol alindi:\n");
		scanf("%f",&km);
		printf("Kilometre / galon: %f\n",km/galon);
		
		toplamKm=toplamKm+km;
		toplamGalon=toplamGalon+galon;
		
	}
		
	}
	
	printf("Toplam ortalama kilometre/galon: %f\n", toplamKm/toplamGalon);
	
	return 0;
}
