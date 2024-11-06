#include<stdio.h>
	 double findvalue(double x)
	{
		double y;
		y=0.0021*x*x*x*x*x+0.00067*(x-13)*(x-13)*(x-13)*(x-13)+46.7*x-100;
		return y;
	}
int main(){
	double root1,c,root2;
	double a=-15;
   double b=15;
	
	while(b-a>0.000001)
	{
	   double c=(a+b)/2;
				//printf("%.6f\n",c);

		if(findvalue(c)*findvalue(a)<0)
		{
		b=c;
		}
		else
		{
		a=c;	
	    }
	    //printf("a=%.6f\n",a);
	   // printf("b=%.6f\n",b);
	}
	root1=a;
	root2=b;
	printf("%.8f to %.8f",root1,root2);

	
	
	return 0;
}
