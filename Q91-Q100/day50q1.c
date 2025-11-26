//Change date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3], newDate[30];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int day, mon, year;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    sscanf(date, "%d/%d/%d", &day, &mon, &year);

    sprintf(newDate, "%02d-%s-%04d", day, months[mon - 1], year);
    printf("Formatted date: %s\n", newDate);

    return 0;
}
