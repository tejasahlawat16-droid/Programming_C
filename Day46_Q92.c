/* Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    gets(str); // Note: unsafe, use fgets() in real programs

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {  // Found first repeating
                firstRepeating = str[i];
                break;
            }
        }
    }

    if(firstRepeating != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
