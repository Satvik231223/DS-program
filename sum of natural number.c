/*
Algorithm of sum of n natural numbers
 
1 start 
2 int i,sum=0;
3 for(i=1;i<=n;i++)
{
sum=sum+i;
}
4 stop
*/
 
 
 #include<stdio.h>
 void main()
 {
 	int n,sum=0,i=1;
 	
 	 printf("Enter a number");
 	 scanf("%d",&n);
 	 
 	 while(i<=n)
 	 {
 	 	sum=sum+i;
 	 	i++;
	  }
	  printf("Sum of number: %d",sum);
 }
