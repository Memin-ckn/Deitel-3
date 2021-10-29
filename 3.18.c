#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
