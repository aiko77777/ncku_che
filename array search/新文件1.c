#include<stdio.h>
#include<stdlib.h> 
int Linearsearch(int a[],int key);
void bubblesort(int b[]);
int binarysearch(int c[],int key);
int main()
{
	int Data[9];
	int key,i,result;
	for(i=0;i<9;i++)
	{
		Data[i]=rand()%20+1;
	}
	printf("enter search key\n");
	scanf("%d",&key);
//	for(i=0;i<9;i++)
	{
		printf("%4d",Data[i]);
	}
	
	//result=Linearsearch(Data,key);//remember the return value use '=' 
	/*if(result==1)
	{
		printf("\ny");
	}
	else{
		printf("\nn");
	} */
	bubblesort(Data);
	int result2=binarysearch(Data,key);
	if(result2==1)
	{
		printf("\nyy");
	}
	else{
		printf("\nnn");
	}
	return 0;
}

int Linearsearch(int a[],int key)
{
	int index=0,k;
	for(k=0;k<9;k++)
	{
		if(a[k]==key)
		{
			index=1;
		}
	}
	return index;
}

void bubblesort(int b[])
{	int round,n;
	int tem; 
	for(round=0;round<8;round++){
	for(n=0;n<8;n++)
	{
		if(b[n]>b[n+1])
		{
			tem=b[n+1];
			b[n+1]=b[n];
			b[n]=tem;
		}
	}
	
}
}

int binarysearch(int b[],int key)
{
	int index=0,i;//exist or not
	int L=0,U=9,M=(L+U)/2;
	for(i=0;i<9;i++)
	{
		printf("%4d",b[i]);
	}
	while(U>=L){
	if(b[M]==key){
		index=1;
		break;
	}
	else if(b[M]>key)
	{
		U=M-1;
	}
	else
	{
		L=M+1;
	}
	printf("\n%d",b[5]);
	//printf("\n%d",M);
	M=(L+U)/2;
}
return index;
}
