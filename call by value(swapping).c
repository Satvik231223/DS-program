#include<stdio.h>
void swap(int ,int);

void main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	
	printf("Enter value of b:");
	scanf("%d",&b);
	
	swap(a,b);
	
	return 0;
}

 void swap(int x, int y)
 {
 	int temp;
 	
 	temp=x;
 	x=y;
 	y=temp;
 	printf("After swapping: \n Value of a is: %d \n Value of b is : %d",x,y);
	
 }
