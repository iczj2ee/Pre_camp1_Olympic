#include <iostream>
using namespace std;

int calcuLateDaysFormBeginYearToDate(int day, int month, int year,
                                     int daysOfMonth[]);

int main() {
    int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysInYear = 365;
    int daysInLeapYear = 366;
    int dayOfEndOfSchool, monthOfEndOfSchool, yearOfEndOfSchool;
    int dayOfBackToSchool, monthOfBackToSchool, yearOfBackToSchool;
    cin >> dayOfEndOfSchool >> monthOfEndOfSchool >> yearOfEndOfSchool;
    cin >> dayOfBackToSchool >> monthOfBackToSchool >> yearOfBackToSchool;
    int totalDays = 0;
    if (yearOfEndOfSchool == yearOfBackToSchool) {
        totalDays =
            calcuLateDaysFormBeginYearToDate(dayOfBackToSchool,
                                             monthOfBackToSchool,
                                             yearOfBackToSchool, daysOfMonth) -
            calcuLateDaysFormBeginYearToDate(dayOfEndOfSchool,
                                             monthOfEndOfSchool,
                                             yearOfEndOfSchool, daysOfMonth);
    } else {
        for (int i = yearOfEndOfSchool; i < yearOfBackToSchool; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
                totalDays += daysInLeapYear;
            } else {
                totalDays += daysInYear;
            }
        }
        totalDays =
            totalDays -
            calcuLateDaysFormBeginYearToDate(dayOfEndOfSchool,
                                             monthOfEndOfSchool,
                                             yearOfEndOfSchool, daysOfMonth) +
            calcuLateDaysFormBeginYearToDate(dayOfBackToSchool,
                                             monthOfBackToSchool,
                                             yearOfBackToSchool, daysOfMonth);
    }
    cout << totalDays << endl;
    return 0;
}

int calcuLateDaysFormBeginYearToDate(int day, int month, int year,
                                     int daysOfMonth[]) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysOfMonth[1] = 29;
    } else {
        daysOfMonth[1] = 28;
    }
    int totalDays = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysOfMonth[i];
    }
    totalDays += day;
    return totalDays;
}
