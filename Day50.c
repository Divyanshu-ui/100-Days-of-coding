// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20], monthStr[4];
    int day, month, year;

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month entered!\n");
        return 0;
    }

    strcpy(monthStr, months[month - 1]); 

    printf("Formatted date: %02d-%s-%04d\n", day, monthStr, year);

    return 0;
}
