#include <stdio.h>

char *my_strncpy(char *dest, char *src, unsigned int n);

int main(int argc, char *argv){
	
	char my_name[] = "Albert";
	char name[6];
	
	char *now = my_strncpy(name, my_name, 3);
	
	int i;
	for(i=0; i<6; i++){
		printf("%c", now[i]);
	}
	printf("\n");
	
	return 0;
}

char *my_strncpy(char *dest, char *src, unsigned int n){
	int i = 0;
	while(i < n){
		dest[i] = src[i];
		
		//src += 1;
		i += 1;
	}
	
	return dest;
}
