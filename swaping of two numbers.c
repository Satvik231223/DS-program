#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value a before swap");
	scanf("%d",&a);
	printf("Enter the value b after swap: ");
	scanf("%d",&b);
	
	c=b;
	b=a;
	a=c;
	
	printf("Value of a after swap:%d \n",a);
	printf("value of b after swap:%d",b);
	
	return 0;
}
