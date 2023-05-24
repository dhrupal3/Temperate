#include<stdio.h>

main()
{
	int n,a=0;
	printf("Enter Value = ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		a++;
	}	
	printf("Count The Number = %d",a);
	
}
