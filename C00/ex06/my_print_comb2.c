#include <stdio.h>

void my_print_comb2(void);

int main(int argc, char *argv){
	
	my_print_comb2();
	
	return 0;
}

void my_print_comb2(void){
	int i, j, k, l;
	char comb[2];
	char br = ',';
	
	for(i = 0; i <= 9; i++){
		for(j = 0; j <= 9; j++){
			comb[0] = i + '0';
			comb[1] = j + '0';
			
			for(l = 0; l < 2; l++){
				write(1, &(comb[l]), 1);
			}
			
			if(i == 9 && j == 9){
				continue;
			}else{
				write(1, &br, 1);
			}
		}
	}
}
