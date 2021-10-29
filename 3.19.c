/*
Başla
satis float olarak tanımla
while ile satis -1 olmadığı sürece döngüye al
	printf+scanf ile satis değeri al
	eğer satis -1 değilse (if)
		satis*9/100+200 ile maaşı bul
		maaşı ekrana yazdır
Bitir
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float satis = 0;
	
	while(satis!=-1){
		
		printf("Dolar cinsinden satis tutarini giriniz (Cikis icin -1):\n");
		scanf("%f",&satis);
		
		if(satis!=-1){
			
			printf("Maas: %f\n", satis*9/100+200);
			
		}
		
	}
	
	return 0;
}
