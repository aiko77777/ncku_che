#include<stdio.h>
float studentavg(int a[]);
int main(){
	int grade[3][4];//[student][subject]
	int i,j,avg,h;
	for(i=0;i<3;i++)
	{
		printf("enter grades for student %d\n",i);
		for(j=0;j<4;j++)
		{
			printf("subject %d\n",j);
			scanf("%d",&grade[i][j]);
		}
	}
	printgrade(grade);
	for(h=0;h<3;h++)
	{
	avg=studentavg(grade[h]);
	printf("%3d",avg);
	}
	
	return 0;
}

void printgrade(int a[][4])//後方一訂要給 
	{
		int m,n;
		for(m=0;m<3;m++)
		{
			printf("student %d",m);
			for(n=0;n<4;n++)
			{
				printf("%3d",a[m][n]);
			}
			printf("\n");
		}
		
	}
	
	 float studentavg(int a[])//一維 
	 {
	 	int i,AVG,sum=0;
	 	for(i=0;i<4;i++)
	 	{
	 		sum+=a[i];
		 }
		 AVG=sum/4.0;
		 return AVG;
	 }
	 
	 float subjectavg(int a[][4])
	 {
	 	int m,n,sum,Avg=0;
	 	for(m=0;m<4;m++)
		 {
	 		for(n=0;n<3;n++)
	 		{
	 			sum+=a[n][m];
			 }
			 Avg=sum/3;
			 printf("%2f",Avg);
		 }
	 }
