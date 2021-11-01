#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int x = 2;
	
	while(x>0){
		printf("%d ",x);
		x = pow(x,2);
	}
		
	return 0;
}
