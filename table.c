#include<stdio.h>
void main(){
	int n,i=1;
	
	printf("Enter a number");
	scanf("%d",&n);

	printf("Table of number");
	
	while(i<=10)
	{
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
}
