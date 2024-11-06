#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main(){
	int num;
	srand(time(NULL));
	num=rand();
	for(int i=0;i<5;i++)
	{
		num=rand();
	printf("%d\n",num);
    }
	return 0;
}
