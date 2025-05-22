#include<stdio.h> 
int main () { 
int rows,cols; 
int matrix[3][ 4]={{4,6,3,6},{8,5,3,2},{9,7,3,1}}; 

for (rows =0; rows < 3; rows ++) 
	{ for (cols =0; cols <4; cols ++) 
		{ 
		printf ("%d   ", matrix [rows ][ cols]); 
		}
	 printf ("\n"); }
	 
return 0; 
}
