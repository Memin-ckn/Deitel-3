#include <stdlib.h>
#include <stdio.h>

int zaman(int saat, int dakika, int saniye);
void fark(int s1, int s2);

int main(int argc, char const *argv[])
{
	int input, saat, dakika, saniye, s1, s2;
	
	printf("Ilk saati girin.(saat:dakika:saniye)\n");
	
	scanf("%d",&saat);
	if(saat<24 && saat >= 0){
		
		scanf("%d",&dakika);
		
		if(dakika >= 0 && dakika <61){
			
			scanf("%d",&saniye);
		
			if(saniye >= 0 && saniye <61){
			
				s1 = zaman(saat,dakika,saniye);
		
				printf("Ikinci saati girin.(saat:dakika:saniye)\n");
		
				scanf("%d",&saat);
				scanf("%d",&dakika);
				scanf("%d",&saniye);
		
				s2 = zaman(saat,dakika,saniye);
		
				fark(s1,s2);
		}
		
			else printf("Hata.\n");
		
		}
		else printf("Hata.\n");
	}
	else printf("Hata.\n");
}

int zaman(int saat, int dakika, int saniye){
	
	return (saat*60*60 + dakika*60 + saniye);
}

void fark(int s1, int s2){
	
	int saatFark = abs(s1-s2);
	int a, b, c;
	
	a = saatFark/3600;
	b = (saatFark-3600*a)/60;
	c = (saatFark-3600*a)-60*b;
	
	printf("Saatlerin farki = %d:%d:%d\n",a,b,c);
}
