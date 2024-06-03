#include <stdio.h>

char *my_strcpy(char *dest, char *src);

int main(int argc, char *argv){
	
	char my_name[] = "Albert";
	char name[6];
	
	char *now = my_strcpy(name, my_name);
	
	int i;
	for(i=0; i<6; i++){
		printf("%c", now[i]);
	}
	printf("\n");
	
	return 0;
}

char *my_strcpy(char *dest, char *src){
	int i = 0;
	while(*src != '\0'){
		dest[i] = src[i];
		
		//src += 1;
		i += 1;
	}
	
	return dest;
}
