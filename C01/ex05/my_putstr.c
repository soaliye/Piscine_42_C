#include <stdio.h>

void my_putstr(char *str);

int main(int argc, char *argv){
	char str[] = "Hello you!";
	
	my_putstr(str);
	
	return 0;
}

void my_putstr(char *str){
	while(*str != '\0'){
		write(1, str, 1);
		str += 1;
	}
	
}
