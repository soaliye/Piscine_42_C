#include <stdio.h>

/*
	[MY_PUTCHAR]
		write(id, adress_of_char, _of_char)

*/

void my_putchar(char c);

int main(int argc, char *argv){
	
	my_putchar('A');
	return 0;
}

void my_putchar(char c){
	write(1, &c, 1);
}
