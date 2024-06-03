#include <stdio.h>

char *my_strlowcase(char *str);

int main(int argc, char *argv){
	char user[] = "NumBerSww";
	
	printf("Before Lowcase: %s\n", user);
	char *now = my_strlowcase(user);
	printf("After Lowcase: %s\n", user);
	
	return 0;
}



char *my_strlowcase(char *str){
	int str_len = 0;
	while(*str != '\0'){
		str_len += 1;
		str += 1;
	}
	//printf("The length: %d\n", str_len);
	
	int i;
	char c;
	
	for(i=1; i<=str_len; i++){
		for(c='A'; c<='Z'; c++){
			if(c == str[-i]){
				//printf("%c\t\t%c\n", str[-i], str[-i]-32);
				str[-i] = c+32;
			}
		}
	}
	
	return str;
}
