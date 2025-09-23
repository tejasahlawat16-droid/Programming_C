/* Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>
int main()
{
    int m,n,i,gcd;
    printf("enter two numbers:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m && i<=n;i++)
    {
        if(m%i==0 && n%i==0)
        gcd=i;
    }
    printf("\n gcd of %d and %d is %d\n",m,n,gcd);
    return 0;
}
