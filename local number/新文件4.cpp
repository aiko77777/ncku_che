#include<stdio.h>
int main()
{
int x=1;
int y=2;
printf("x=%d y=%d\n",x,y);
{
	int x=101;
	printf("In '{}':x=%d y=%d\n",x,y);
}

	return 0;
}
