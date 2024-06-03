#include <stdio.h>

void my_rev_int_tab(int *tab, int size);

int main(int argc, char *argv){
	
	int numbers[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int i;
	for(i = 0; i < 11; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	my_rev_int_tab(numbers, 11);
	
	for(i = 0; i < 11; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	return 0;
}

void my_rev_int_tab(int *tab, int size){
	int i;
	for(i = 0; i < size/2; i ++){
		int temp = tab[i];
		tab[i] = tab[size-i-1];
		tab[size-i-1] = temp;
	}
}
