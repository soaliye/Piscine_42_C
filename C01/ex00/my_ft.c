#include <stdio.h>

void my_ft(int *n);

int main(int argc, char *argv){
	
	int number = 10;
	printf("The number is: %d\n", number);
	my_ft(&number);
	
	printf("The number is now: %d\n", number);
	
	return 0;
}

void my_ft(int *n){
	*n = 42;
}
