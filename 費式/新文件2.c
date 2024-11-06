#include<stdio.h>
//0 1 1 2 3 5 8 13 21 
int main()
{
	int a,final;
	printf("輸入要求的數列項數");
	scanf("%d",&a);
	final=sequence(a);
	printf("%d",final);
	return 0;
}
int sequence(int a)
{
	int tem;
	switch(a){
		case 1:
		tem=0;
		break;
		case 2:
		tem=1;
		break ;
		default:
		tem=sequence(a-1)+sequence(a-2); 
		
	}
	return tem;
	
}
