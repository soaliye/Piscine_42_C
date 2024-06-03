#include <stdio.h>

void my_swap(int *a, int *b);

int main(int argc, char *argv){
	
	int a = 18;
	int b = 56;
	
	printf("A = %d   and   B = %d\n", a, b);
	
	my_swap(&a, &b);
	
	printf("A = %d   and   B = %d\n", a, b);
	
	return 0;
}

void my_swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
