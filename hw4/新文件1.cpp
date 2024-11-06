#include<stdio.h>
//0 1 1 2 3 5 8 13 21 
int main()
{
	int x;
	scanf("%d",&x);
    int a[x];
    a[1]=0;
    a[2]=1;
	if(x>2)
	{
    for(int i=3;i<=x;i++)
	{
		
		a[i]=a[i-1]+a[i-2];
	}
	}

	printf("%d",a[x]);
	return 0;
}

	
		

