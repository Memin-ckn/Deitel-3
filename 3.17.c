#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float galon=0, km=0, toplamKm=toplamKm+km, toplamGalon=toplamGalon+galon, sayici;
	
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
	
	printf("Toplam ortalama kilometre/galon: %f\n", toplamKm/toplamGalon);
		
	}
		
	return 0;
}
