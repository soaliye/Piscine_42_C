#include <stdio.h>

void my_sort_int_tab(int *tab, int size);

int main(int argc, char *argv){
	int numbers[11] = {0, 4, 2, 3, 4, 5, 1, 7, 8, 9, 6};
	
	int i;
	for(i = 0; i < 11; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	my_sort_int_tab(numbers, 11);
	
	for(i = 0; i < 11; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	
	return 0;
}

void my_sort_int_tab(int *tab, int size){
	int i, j;
	
	int sorted = 0;
	while(sorted == 0){
		int found = 0;
		for(i = 1; i<size; i++){
			if(tab[i] < tab[i-1]){
				found = 1;
				int temp = tab[i];
				tab[i] = tab[i-1];
				tab[i-1] = temp;
			}
		}
		if(found == 1){
			sorted = 0;
		}else if(found == 0){
			sorted = 1;
		}
	}
	
}
