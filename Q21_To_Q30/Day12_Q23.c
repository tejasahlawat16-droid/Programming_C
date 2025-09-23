/* Q23: Write a program to calculate a library fine based on late days.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int days, fine = 0;
    printf("Enter The days :");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine Rupees%d\n", fine);
    } 
    else if (days <= 10) {
        fine = days * 4;
        printf("Fine Rupees%d\n", fine);
    } 
    else if (days <= 30) {
        fine = days * 6;
        printf("Fine Rupees%d\n", fine);
    } 
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}