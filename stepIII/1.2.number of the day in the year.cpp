#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
int getDayOfYear(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
        daysInMonth[1] = 29;
    int dayNumber = day;
    for (int i = 0; i < month - 1; i++) {
        dayNumber += daysInMonth[i];
    }
    return dayNumber;
}

int main() {
    int day, month, year;

    cout << "Enter day month year: ";
    cin >> day >> month >> year;

    // Save original date
    int oldDay = day;
    int oldMonth = month;
    int oldYear = year;

    int currentDayNumber = getDayOfYear(day, month, year);

    int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    if (isLeapYear(year))
        daysInMonth[1] = 29;

    // Find next date
    day++;

    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    int nextDayNumber = getDayOfYear(day, month, year);

    cout << "\nCurrent Date: "
         << oldDay << "/" << oldMonth << "/" << oldYear
         << "\nDay Number: " << currentDayNumber;

    cout << "\n\nNext Date: "
         << day << "/" << month << "/" << year
         << "\nDay Number: " << nextDayNumber;

    return 0;
}
