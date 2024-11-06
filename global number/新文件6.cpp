#include<stdio.h>
int x=1;
void useGlobal(void)
	{
		
		printf("In'useGlobal():x=%d\n",x);
		x*=10;
		}
int main(void)
{
	useGlobal();
		useGlobal();
		useGlobal();
		useGlobal();

	return 0;
}


