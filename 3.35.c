#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi=0, b1=0, b2=0, b3=0, b4=0, b5=0;
	
	printf("5 basamakli bir sayi giriniz:\n");
	scanf("%d",&sayi);
	
	if(sayi>=10000 && sayi<=99999){
	
		b1 = sayi%10;
		b2 = (sayi/10)%10;
		b3 = (sayi/100)%10;
		b4 = (sayi/1000)%10;
		b5 = (sayi/10000)%10;

		if(b1==b5 && b2==b4){
			printf("Bu sayi bir polindrom sayidir.\n");
		}
		else printf("Bu sayi bir polindrom sayi degildir.\n");
	}
	else printf("Lutfen 5 basamakli bir sayi girin.\n");
    return 0;
}
