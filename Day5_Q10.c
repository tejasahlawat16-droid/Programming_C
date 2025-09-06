/* Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter the total no. of seconds :");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 sec
    minutes = (totalSeconds % 3600) / 60;  // remaining seconds / 60
    seconds = totalSeconds % 60;           // leftover seconds

    
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}