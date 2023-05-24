#include<stdio.h>

main()
{
    int fdigit,ldigit,sum,n,a;
    printf("Enter Value = ");
    scanf("%d",&n);
    ldigit=n%10;
    
    while(n>=10)
    {
    	n=n/10;
         
	}
	fdigit=n;

    sum=fdigit+ldigit;
    printf("Your Value First Digit And Last Digit Sum = "),
    printf("%d",sum);
}
