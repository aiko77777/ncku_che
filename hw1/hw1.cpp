#include<stdio.h>
int main(){
	int temporarygrade=0;
	int temporaryw;
	int sum=0,avg;
	int wsum=0;
	
	
	while(temporarygrade>=0)
	{
	printf("請輸入成績");
	scanf("%d",&temporarygrade);
	if(temporarygrade<0){break;}
	printf("請輸入學分數");
	scanf("%d",&temporaryw);
	if(temporarygrade<=100){
	sum+=temporarygrade*temporaryw;
	wsum+=temporaryw;
	printf("輸入-1中止\n");
	}
	else{
		printf("重新輸入\n");
	}
	}
	
	avg=sum/wsum;
	if(avg>=90)
	{
	printf("加權平均分數=%d GPA=A",avg);	
	}
	else if(avg>=80)
	{
		printf("加權平均分數=%d GPA=B",avg);
	}
	else if(avg>=70)
	{
		printf("加權平均分數=%d GPA=C",avg);
	}
	else if(avg>=60)
	{
		printf("加權平均分數=%d GPA=D",avg);
    }
    else
	{
		printf("加權平均分數=%d GPA=F",avg);
	}
	
	
	return 0;
}

