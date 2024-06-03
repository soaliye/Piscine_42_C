#include <stdio.h>

void my_print_alphabet(void);

int main(int ardc, char *argv){
	my_print_alphabet();
	return 0;
}

void my_print_alphabet(void){
	char l;
	
	for(l = 'a'; l <= 'z'; l++){
		write(1, &l, 1);
	}
}
