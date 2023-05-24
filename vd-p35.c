#include<stdio.h>

main()    
{
	int n,a,sum=0,t;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	t=n;
	
	while(n>0)
	{
		a=n%10;
		sum=(sum*10)+a;
	    n=n/10;
	}
	
	if(t==sum)
	{
		printf("Palindrome Number.");
	}
	else
	{
		printf("Not Palindrome Number.");
	}
}
