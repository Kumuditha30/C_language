#include<stdio.h>
int main(){
	int i,sum=0;
	int m[5];
	float x;
	
	for(i=0;i<5;i++){
		printf("enter the marks: ");
		scanf("%d",&m[i]);
	}
	for(i=0;i<5;i++){
		printf("Subject mark: %d\n",m[i]);
	}
	
	for(i=0;i<5;i++){
		sum+=m[i];
	}
	x=sum/5;
	
	printf("Total is: %d\n Average is: %.2f",sum,x);
	
	
}
