#include<stdio.h>
//0 1 1 2 3 5 8 13

int sequence(int a)
 {
 	int final;
 switch(a){
 	case 0:
 		final=1;
 		break;
 	case 1:
 		final=1;
 		break;
 	default:
 		final=a*sequence(a-1);
 		break;
 	
 }
 	return final;
 }



int main()
{
	int a,final,ter;
	scanf("%d",&a);
	ter=sequence(a); // //variety = function(a);  函數回傳值要指派給變數 
	printf("%d",ter);
	return 0;
 } 
 
 
 
 /*階乘   */
 
 
