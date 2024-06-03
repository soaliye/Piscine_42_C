#include <stdio.h>

int my_strlen(char *str);

int main(int argc, char *argv){
	char string[] = "Hello";
	
	printf("Length of %s is %d\n", string, my_strlen(string));
	
	return 0;
}

int my_strlen(char *str){
	int count = 0;
	while(*str != '\0'){
		count += 1;
		str += 1;
	}
	
	return count;
}
