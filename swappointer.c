#include<stdio.h>
int main(){
	int x,y;
	
	printf("Enter Num1: ");
	scanf("%d",&x);
	printf("Enter num2: ");
	scanf("%d",&y);
	
	int *a=&y;
	int *b=&x;

	
	printf("Num1 : %d \n Num2 : %d",x,y);
	
	return 0;
}
