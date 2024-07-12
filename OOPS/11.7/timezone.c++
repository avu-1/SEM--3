#include <iostream>
using namespace std;
int main() {
    int hour, minutes;
    string timezone;

    cout << "Enter your timezone location: ";
    cin >> timezone;

    cout << "Enter the hour: ";
    cin >> hour;

    cout << "Enter the minutes: ";
    cin >> minutes;

    // Calculate other timezones
    // Assuming each timezone is offset by a fixed number of hours
    int timezoneOffset = 0;

    if (timezone == "EST") {
        timezoneOffset = -5;
    } else if (timezone == "CST") {
        timezoneOffset = -6;
    } else if (timezone == "MST") {
        timezoneOffset = -7;
    } else if (timezone == "PST") {
        timezoneOffset = -8;
    } else {
        cout << "Invalid timezone" << endl;
        return 0;
    }

    int newHour = (hour + timezoneOffset + 24) % 24;

    cout << "Other timezones:" << endl;
    cout << "EST: " << (newHour - 5 + 24) % 24 << ":" << minutes << endl;
    cout << "CST: " << (newHour - 6 + 24) % 24 << ":" << minutes << endl;
    cout << "MST: " << (newHour - 7 + 24) % 24 << ":" << minutes << endl;
    cout << "PST: " << (newHour - 8 + 24) % 24 << ":" << minutes << endl;

    return 0;
}