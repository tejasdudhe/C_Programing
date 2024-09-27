#include <stdio.h>
void convert(char*);
int main(){
	char ch;
	printf("Enter any alphabet: ");
	scanf("%c",&ch);
	convert(&ch);
	
}
void convert(char *ch){
	if(*ch >= 'A' && *ch<='Z'){
		printf("Lowercase of %c is %c",*ch,*ch+32);
	}
	else if(*ch >='a' && *ch<='z'){
		printf("Uppercase of %c is %c",*ch,*ch-32);
	}
}