/* Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    int day, month, year;

    // Array of month abbreviations
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Extract day, month, and year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Check if month is valid
    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}

