/* Write a program to find the LCM of two numbers.
*/


#include <stdio.h>
int main()
{
    int a,b,n;
    printf("\nEnter two number:");
    scanf("%d %d" ,&a,&b);
    for(n=1; n<=a*b; n++)
    {
        if(n%a==0 && n%b==0)
        break;

    }
    printf("\nLCM is %d",n);
    return 0;

}