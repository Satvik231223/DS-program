#include<stdio.h>
void main()
{
	int f=1,i,n;
	
	printf("Enter a number");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of given number is : %d",f);
}
