/*Write a program to calculate the factorial of a number.
*/ 

#include <stdio.h>

#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter a positive integer:");
    scanf("%i",&n);
    while(n>0)
    {
        factorial*=n;
        n--;

    }
      printf("factorial=%i\n",factorial);
    return 0;
}

    
