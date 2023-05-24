#include <stdio.h>
int main()
{
    int n, i,f;
    
    printf("Enter Your Value = ");
    scanf("%d", &n);
     
    for(i=1;i<=n;i++)
    {
         f=f*i;
    }
    printf("Factorial Number = %d",f);
}
