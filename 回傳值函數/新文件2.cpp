#include<stdio.h>
int findmax(int x1,int x2,int x3)
{
	
	if(x2<x3)
	{
		x2=x3;
	}
	if(x1<x2)
	{
		x1=x2;
	}
	return x1;
}
int main()
{
	int x1,x2,x3,max;
	scanf("%d%d%d",&x1,&x2,&x3);
	max=findmax(x1,x2,x3);
	printf("%d",max);
	return 0;
}


