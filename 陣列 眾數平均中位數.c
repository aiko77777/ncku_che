#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
float calculatemean(int data[]);
void print(int data[]);
void bubblesort(int a[]);
int main()
{
	srand(time(NULL));
	int data[SIZE];
	float mean;
	int median;
	int mode,i;
	
	mean=calculatemean(data);
	
	//printf("%.3f\n",mean);
	
	
	return 0;
}

float calculatemean(int data[]){
	float avg;
	int c,sum=0;
	for(c=0;c<SIZE;c++)
	{
		sum+=data[c];
	}
	avg=(float)sum/SIZE; //
	return avg;
}
int findmed(int data[])
{
	int median;
	bubblesort(data);
	print(data);
	median=data[SIZE/2];
	return median;
	
}
void bubblesort(int a[])
{
	//int data[SIZE];
	int tem,i,r;
	for(r=0;r<SIZE;r++){
	for(i=0;i<SIZE;i++){
		if(a[i]>a[i+1])
		{
		tem=a[i];
		a[i]=a[i+1];
		a[i+1]=tem;
		}
	}	
}
}



