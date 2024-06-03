#include <stdio.h>

void my_div_mod(int a, int b, int *div, int *mod);

int main(int argc, char *argv){
	int a = 64;
	int b = 5;
	
	int div = NULL;
	int mod = NULL;
	
	my_div_mod(a, b, &div, &mod);
	
	printf("%d/%d = div = %d and it remains mod = %d\n", a, b, div, mod);
	
	return 0;
}

void my_div_mod(int a, int b, int *div, int *mod){
	*div = a/b;
	*mod = a%b;
}
