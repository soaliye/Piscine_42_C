#include <stdio.h>

void my_ultimate_ft(int *********n);

int main(int argc, char *argv){
	
	int number = 54;
	printf("The number is: %d\n", number);
	
	int *n1 = &number;
	int *n2 = &n1;
	int *n3 = &n2;
	int *n4 = &n3;
	int *n5 = &n4;
	int *n6 = &n5;
	int *n7 = &n6;
	int *n8 = &n7;
	
	my_ultimate_ft(&n8);
	
	printf("The number is now: %d\n", number);
	
	return 0;
}

void my_ultimate_ft(int *********n){
	*********n = 42;
}
