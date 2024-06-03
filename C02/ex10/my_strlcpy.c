#include <stdio.h>

unsigned int my_strlcpy(char *des, char *src, unsigned int size);

int main(int argc, char *argv){
	char name[] = "soaliye";
	char copy[10];
	
	my_strlcpy(copy, name, 5);
	printf("Destination: %s\n", copy);
	
	return 0;
}


unsigned int my_strlcpy(char *des, char *src, unsigned int size){
	
	int src_size = 0;
	//char *cp = src;
	while(*src != '\0'){
		src_size += 1;
		src += 1;
	}
	src -= src_size;
	
	
	printf("Size of the Source: %d\n", src_size);
	
	printf("Character: %c\n", src[0]);
	
	int i;
	for(i=0; i<size-1; i++){
		des[i] = src[i];
		printf("Char: %c\n", des[i]);
	}
	des[size-1] = '\0';
	
	return src_size;
}
