#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
		
		int x = 0, y = 0, z = 0;
		
		printf("Bir kenar uzunlugunu giriniz.");
		scanf("%d",&x);
		
		z = x;
		
		while(x > 0){
			
			y = z;
			while(y > 0){
				
				printf("* ");
				y--;
				
			}
			
			printf("\n");
			x--;
			
		}
		
	return 0;
}
