/* Q16: Write a program to input three numbers and find the largest among them using if–else.


Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main() {
    int a, b, c, big;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b)
    {
    printf("%d is biggest\n",a);
    }
    else
    {
        if(b>c)
        {
             printf("%d is biggest\n",b);
        }
        else
        {
             printf("%d is biggest\n",c);
        }
    }
    
    

    return 0;
}