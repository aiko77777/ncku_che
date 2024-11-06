#include<stdio.h>
int main(){
	int a[3]={0,1,2};
	int A[2][3]={{1,3,5},{8,10,12}};//2X3 matrix  1D array x2   each array has 3 integrals
	 int i,j;
	 for(i=0;i<2;i++)//²Ä¤@¾î¦æ 
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%3d",A[i][j]);
		 }
		 printf("\n");
	 }
	 
	 //printarray(A[0]);
	 print2Darray(A);
	
	
	return 0;
}

void printarray(int array[])
{
	int m;
	for(m=0;m<3;m++)
	{
		printf("%3d",array[m]);
	}
}

void print2Darray(int ARR[][3])
{
	int m,n;
	for(m=0;m<2;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("%3d",ARR[m][n]);   
		}
		printf("\n");
	}
}
