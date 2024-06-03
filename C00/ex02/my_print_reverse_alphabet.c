#include <stdio.h>

void my_print_reverse_alphabet(void);

int main(int ardc, char *argv){
	my_print_reverse_alphabet();
	return 0;
}

void my_print_reverse_alphabet(void){
	char l;
	
	for(l = 'z'; l >= 'a'; l--){
		write(1, &l, 1);
	}
}
