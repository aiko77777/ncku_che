#include<stdio.h>
int main(){
	
	int pass;
	int i;
	int hold;
	int tem;
	int size1=10;
	int size2=10;
	int pointer=0;
	int a[10]={2,4,6,8,10,12,68,89,90,99};
	printf("data items in original number\n");
	for(i=0;i<size1;i++){
		printf("%3d",a[i]);
	}
	
	
	for(pass=1;pass<size1;pass++)
	{
		for(i=0;i<size2;i++)
		{
			if(a[i]>a[i+1])
			{
				tem=a[i];
				a[i]=a[i+1];
				a[i+1]=tem;	
				pointer=1;		//if there is any change in array,the pointer is changed from 0 to 1. 
			}					// if there is no change in the array,means that pointer=0,the loop stops.
			
		}
		size2-=size2;     //when each loop is completed,the counts for searching the array reduce by 1.
		if(pointer==0)
		{
			break;   
		}
	}
	printf("\n");
	for(i=0;i<size1;i++)
	{
		printf("%4d",a[i]);
	}
	
	return 0;
}
