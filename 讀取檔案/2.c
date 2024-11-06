#include<stdio.h>
int main() {
	int grade;
	//printf("enter ur grade\n");
	//scanf("%d",&grade);
	FILE *input;
	input=fopen("grade.txt", "r");//link to grade.txt in reading mode
	fclose(input);//打開後關閉檔案
	fscanf(input,"%d",&grade);
	printf("%d",grade);
	if(grade>=60) {
		printf("pass!\n");
	} else {
		printf("failed");

	}
	return 0;
}
