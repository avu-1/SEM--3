#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int main() {
    int birthYear, birthMonth, birthDay;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month: ";
    cin >> birthMonth;
    cout << "Enter your birth day: ";
    cin >> birthDay;

    time_t now = time(0);
    tm* currentDate = localtime(&now);
    int currentYear = currentDate->tm_year + 1900;
    int currentMonth = currentDate->tm_mon + 1;
    int currentDay = currentDate->tm_mday;

    int daysLived = 0;
    for (int year = birthYear; year <= currentYear; year++) {
        int startMonth = (year == birthYear) ? birthMonth : 1;
        int endMonth = (year == currentYear) ? currentMonth : 12;

        for (int month = startMonth; month <= endMonth; month++) {
            int startDay = (year == birthYear && month == birthMonth) ? birthDay : 1;
            int endDay = (year == currentYear && month == currentMonth) ? currentDay : (isLeapYear(year) ? 29 : 28);

            for (int day = startDay; day <= endDay; day++) {
                daysLived++;
            }
        }
    }

    cout << "Days lived: " << daysLived << endl;

    return 0;
}
