#include <stdio.h>

void ft_is_negative(int n);

int main(int argc, char *argv){
	ft_is_negative(-10);
	return 0;
}

void ft_is_negative(int n){
	char sign;
	
	if(n < 0){
		sign = 'N';
		write(1, &sign, 1);
	}else if(n > 0){
		sign = 'P';
		write(1, &sign, 1);
	}
}
