#include<stdio.h>
int main(){
	int temporarygrade=0;
	int temporaryw;
	int sum=0,avg;
	int wsum=0;
	
	
	while(temporarygrade>=0)
	{
	printf("�п�J���Z");
	scanf("%d",&temporarygrade);
	if(temporarygrade<0){break;}
	printf("�п�J�Ǥ���");
	scanf("%d",&temporaryw);
	if(temporarygrade<=100){
	sum+=temporarygrade*temporaryw;
	wsum+=temporaryw;
	printf("��J-1����\n");
	}
	else{
		printf("���s��J\n");
	}
	}
	
	avg=sum/wsum;
	if(avg>=90)
	{
	printf("�[�v��������=%d GPA=A",avg);	
	}
	else if(avg>=80)
	{
		printf("�[�v��������=%d GPA=B",avg);
	}
	else if(avg>=70)
	{
		printf("�[�v��������=%d GPA=C",avg);
	}
	else if(avg>=60)
	{
		printf("�[�v��������=%d GPA=D",avg);
    }
    else
	{
		printf("�[�v��������=%d GPA=F",avg);
	}
	
	
	return 0;
}

