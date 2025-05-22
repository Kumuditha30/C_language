#include<stdio.h>
void greet(char name[50]){
	printf("Hello %s",name);
}

int main(){
	char i[50];
	printf("Enter your name: ");
	scanf("%s[50]",&i);
	
	greet(i);
	
	return 0;
}
