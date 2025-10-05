/* Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // To store frequency of each digit (0-9)
    int digit, maxFreq = 0, mostFreqDigit = 0;
    
    printf("Enter an integer: ");
    scanf("%lld", &num);
    
    if(num < 0) {
        num = -num; // handle negative numbers
    }
    
    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    // Find the digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }
    
    printf("The digit that occurs the most is %d (appears %d times).\n", mostFreqDigit, maxFreq);
    
    return 0;
}
