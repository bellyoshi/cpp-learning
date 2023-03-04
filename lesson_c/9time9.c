#include <stdio.h>
/*
 * table of multiple 9 times 9
 */
int main(int argc, char *argv[]){
	for(int i = 1; i < 10; i++){
		for(int j = 1; j < 10; j++){
			printf("%3d ", i * j);
		}
		printf("\n");
	}
	return 0;
}


