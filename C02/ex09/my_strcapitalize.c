#include <stdio.h>

char *my_strcapitalize(char *str);

int main(int argc, char *argv){
	char user[] = "my name is soaliye";
	
	printf("Before Capital: %s\n", user);
	char *now = my_strcapitalize(user);
	printf("After Capital: %s\n", user);
	
	return 0;
}



char *my_strcapitalize(char *str){
	int str_len = 0;
	while(*str != '\0'){
		str_len += 1;
		str += 1;
	}
	//printf("The length: %d\n", str_len);
	
	int i;
	char c;
	
	//printf("%c\n", str[-15-1-1]);
	
	for(i=1; i<=str_len; i++){
		for(c='a'; c<='z'; c++){
			if((c == str[-i] && str[-i-1] == ' ') || (c == str[-i] && i == str_len)){
				//printf("%c\t\t%c\n", str[-i], str[-i]-32);
				str[-i] = c-32;
			}
		}
	}
	
	return str;
}
