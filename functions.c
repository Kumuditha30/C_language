#include<stdio.h>
int addition(int a,int b){
	int ans;
	ans=a+b;
	return ans;
}
int main(){
	int z,i,j;
	printf("Enter 2 integers: ");
	scanf("%d \n %d",&i,&j);
	
	z=addition(i,j);
	printf("Answer is %d",z);
	 return 0;
}
