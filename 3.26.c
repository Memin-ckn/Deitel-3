#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi;
	
	sayi = 3; 
	
	printf("A\t A+2\t A+4\t A+6\n");
	
	while (sayi <= 15){
		
		printf("\n%d\t %d\t %d\t %d",sayi, sayi+2, sayi+4, sayi+6);
		sayi +=3 ;
}
	return 0;
}
