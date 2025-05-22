#include<stdio.h>
int square(int a){
	int ans;
	ans=(a*a);
	return ans;
}
int main(){
	int z,i;
	printf("Enter a integer: ");
	scanf("%d",&i);
	
	z=square(i);
	printf("Answer is %d",z);
	 return 0;
}
