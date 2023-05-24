#include<stdio.h>

main()    
{    
 int a=0,b=1,c,i,n;    

 	c = a+b;  
		  printf("Enter the number = ");    
 	scanf("%d",&n);
 
 
     printf("Your Fibonacci Number = %d,%d,",a,b);    
    for(i=3;i<=n;i++)  
     {     
 		c=a+b;      
  		printf(",%d",c);    
  		a=b;    
  		b=c;    
 	}	  
    
 }    
