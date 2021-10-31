#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 0;
	
	while(x!=1 && x!=2){
		
		printf("Parolayi giriniz:\n");
		scanf("%d",&x);
		
		if(x!=1 && x!=2){
			printf("Parola yanlis. Tekrar deneyiniz.\n\n");
		}
		
		else printf("Parola dogru.\n");
		
	}
	
	return 0;
}
