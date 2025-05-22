#include<stdio.h>
int main(){
	int a,d;
	int *b;
	int *c;
	
	printf("Enter two integers: ");
	scanf("%d %d",&a,&d);
	
	b=&a;
	c=&d;
	
	printf("Sum : %d",(*b+*c));
	
}
