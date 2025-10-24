/* Check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);  // Note: gets() is unsafe, use fgets() in real programs
    printf("Enter second string: ");
    gets(str2);

    // Count frequency of each letter in str1
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i])) {
            freq1[tolower(str1[i]) - 'a']++;
        }
    }

    // Count frequency of each letter in str2
    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i])) {
            freq2[tolower(str2[i]) - 'a']++;
        }
    }

    // Compare frequency arrays
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
