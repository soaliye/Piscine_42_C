#include <stdio.h>

void my_print_numbers(void);

int main(int argc, char *argv){
	my_print_numbers();
	
	return 0;
}

void my_print_numbers(void){
	int d;
	
	for(d = 0; d <= 9; d++){
		char l = d + '0';
		write(1, &l, 1);
	}
}
