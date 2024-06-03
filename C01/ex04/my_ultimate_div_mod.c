#include <stdio.h>

void my_ultimate_div_mod(int *a, int *b);

int main(int argc, char *argv){
	int a = 83;
	int b = 5;
	
	printf("%d/%d = ", a, b);
	
	my_ultimate_div_mod(&a, &b);
	
	printf("%d and it remains mod = %d\n", a, b);

	
	return 0;
}

void my_ultimate_div_mod(int *a, int *b){
	int tempa = *a;
	int tempb = *b;
	
	*a =  tempa/tempb;
	*b = tempa%tempb;
	
}
