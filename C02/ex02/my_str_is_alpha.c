#include <stdio.h>

int my_str_is_alpha(char *str);

int main(int argc, char *argv){
	char user[] = "Numbersww";
	
	printf("isAlpha: %d\n", my_str_is_alpha(user));
	
	return 0;
}



int my_str_is_alpha(char *str){
	int str_len = 0;
	while(*str != '\0'){
		str_len += 1;
		str += 1;
	}
	printf("The length: %d\n", str_len);
	
	
	int checker[str_len];
	int check;
	int iter = str_len-1;
	char l, m;
	
	while(iter >= 0){
		check = 0;
		printf("Checking for: %d\n", iter);
		//printf("\tChar: %c\n", str[-iter-1]);
		for(l='a'; l<='z'; l++){
			//printf("\t\tFor char: %c\n", l);
			if(l == str[-iter-1]){
				printf("Char: %c\n", str[-iter-1]);
				check = 1;
			}
		}
		for(l='A'; l<='Z'; l++){
			//printf("\t\tFor char: %c\n", l);
			if(l == str[-iter-1]){
				printf("Char: %c\n", str[-iter-1]);
				check = 1;
			}
		}
		
		checker[iter] = check;
		iter -= 1;
	}
	
	int is_alpha = 1;
	int i;
	for(i=0; i<str_len; i++){
		if(checker[i] == 0){
			is_alpha = 0;
		}
	}
	
	return is_alpha;
}
