#include <stdio.h>

void my_print_comb(void);

int main(int argc, char *argv){
	
	my_print_comb();
	
	return 0;
}

void my_print_comb(void){
	int i, j, k, l;
	char comb[3];
	char br = ',';
	
	for(i = 0; i <= 7; i++){
		for(j = 1; j <= 8; j++){
			for(k = 2; k <= 9; k++){
				comb[0] = i + '0';
				comb[1] = j + '0';
				comb[2] = k + '0';
				
				for(l = 0; l <= 2; l++){
					write(1, &(comb[l]), 1);
				}
				if(i == 7 && j == 8 && k == 9){
					continue;
				}else{
					write(1, &br, 1);
				}
			}
		}
	}
}
