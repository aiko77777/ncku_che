#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int dic1,dic2,dic3,sum,i;
	int oddwin=0,evenwin=0;
	int oddlose=0,evenlose=0;
	char bet;
	for(i=0;i<1000;i++){
	dic1=rand()%6+1;
	dic2=rand()%6+1;
	dic3=rand()%6+1;
    //printf("%d\n%d\n%d\n",dic1,dic2,dic3);
	sum=dic1+dic2+dic3;
	if(sum%2==1){
	if(sum/2>=2&&dic1!=dic2!=dic3)
	{
		oddwin++;
	}
	else{
		oddlose++;
	}
}
	if(sum%2==0){
	if(sum%2==0&&sum/2>=2&&dic1!=dic2!=dic3)
	{
		evenwin++;
	}
	else{
		evenlose++;
	}
}
}
	//printf("%d\n",win);
	//printf("%d\n",lose);
	
		printf("the winning percentage of betting odd is %.3f\n",oddwin/1000.00); 
		printf("the winning percentage of betting even is %.3f\n",evenwin/1000.00); 

	return 0;
}
