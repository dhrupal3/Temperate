#include<stdio.h>

main()
{
    int a=1,n;
    printf("Enter Value N = ");
    scanf("%d",&n);
    
    while(a<=10)
    {
        printf("%d",n);
        printf(" * %d",a);
        printf(" = %d\n",n*a);
        a++;
    }
    return 0;
}

