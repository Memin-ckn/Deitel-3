#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
		
		int x = 8, y = 0, z = 0;
		
		z = x;
		
		while(x > 0){
			
			y = z;
			while(y > 0){
				
				printf("* ");
				y--;
				
			}
			
			printf("%s", x%2 ? "\n" : "\n ");
			x--;
			
		}
		
	return 0;
}
