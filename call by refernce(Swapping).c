#include<stdio.h>
void swap(int *,int*);

void main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	
	printf("Enter value of b:");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("After swapping: \n Value is : %d \n Value of b is : %d",a,b);
	
}
void swap(int *p,int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
	
}
