
/*
Başla
faiz, anapara, oran float olarak; gunler int olarak tanımla
while anapara -1 değilse döngüye al
	anapara girdisi al
	if anapara -1 değilse 
		sırasıyla faiz ve gün girdisi al
		faiz hesabı yaptır ekrana yazdır
Bitir
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float gun = 0;
	float faiz = 0, anapara = 0, oran = 0;
	
	while(anapara!=-1){
	
	printf("Anaparayi girin (Cikis icin -1):\n");
	scanf("%f",&anapara);
	
	if(anapara!=-1){
		
		printf("Faiz oranini girin:\n");
		scanf("%f",&oran);
		printf("Kac gunluk faiz:\n");
		scanf("%f",&gun);
		faiz = anapara * oran * gun / 365;
		printf("Faiz ucreti %.2f$'dir.\n",faiz);
		
	}
		
	}
	
	return 0;
}
