#include <stdio.h>

int my_str_is_printable(char *str);

int main(int argc, char *argv){
	char user[] = "Numbersww ";
	
	printf("isPrintable: %d\n", my_str_is_printable(user));
	
	return 0;
}



int my_str_is_printable(char *str){
	int str_len = 0;
	while(*str != '\0'){
		str_len += 1;
		str += 1;
	}
	//printf("The length: %d\n", str_len);
	
	
	int checker[str_len];
	int check;
	int iter = str_len-1;
	char l;
	int n, j;
	char special[] = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ ";
	
	while(iter >= 0){
		check = 0;
		//printf("Checking for: %d\n", iter);
		//printf("\tChar: %c\n", str[-iter-1]);
		for(l='a'; l<='z'; l++){
			//printf("\t\tFor char: %c\n", l);
			if(l == str[-iter-1]){
				//printf("Char: %c\n", str[-iter-1]);
				check = 1;
			}
		}
		for(l='A'; l<='Z'; l++){
			//printf("\t\tFor char: %c\n", l);
			if(l == str[-iter-1]){
				//printf("Char: %c\n", str[-iter-1]);
				check = 1;
			}
		}
		for(n=0; n<=9; n++){
			//printf("\t\tFor char: %c\n", l);
			if(n == str[-iter-1]-'0'){
				//printf("Char: %c\n", str[-iter-1]);
				check = 1;
			}
		}
		for(j=0; j<34; j++){
			if(special[j] == str[-iter-1]){
				//printf("Char: %c\n", str[-iter-1]);
				check = 1;
			}
		}
		
		
		checker[iter] = check;
		iter -= 1;
	}
	
	int is_printable = 1;
	int i;
	for(i=0; i<str_len; i++){
		if(checker[i] == 0){
			is_printable = 0;
		}
	}
	
	return is_printable;
}
