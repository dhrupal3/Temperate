#include<stdio.h>

main()    
{
	int i,n,num=0;
	
	printf("Enetr Your Number = ");
	scanf("%d",&n);
	
	if(n!=0 && n!=1)
	{
	
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				num=1;	
				break;
			}
		}
	 	if(num==0)
	 	{
	 		printf("This Number Is Prime Number.");
		}
		else
		{
			printf("This Number Is Not Prime Number.");
		}
    }
}
