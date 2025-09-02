#include<stdio.h>

void main(){
	int i,sum=0,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	 printf("summation of saquare of n number is : %d",sum);
	 return 0;
}
