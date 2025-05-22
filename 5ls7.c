#include<stdio.h>
int cal(int x,int y,int z,int a,int b){
	int ans;
	ans=x+y+z+a+b;
	printf("Total:%d\n",ans);
	return ans;
}
float avg(int x,int y,int z,int a,int b){
	int ans;
	float avg;
	ans=x+y+z+a+b;
	avg=ans/5;
	printf("Average:%.2f",avg);
	return avg;
}
int main(){
	int i,subs[5];
	for(i=0;i<5;i++){
	printf("Enter marks: \n");
	scanf("%d",&subs[i]);}
	
	cal(subs[0],subs[1],subs[2],subs[3],subs[4]);
	avg(subs[0],subs[1],subs[2],subs[3],subs[4]);
	
	return 0;
}
