#include <iostream>

int main() {
    using namespace std;

    const int secs_per_min = 60;
    const int mins_per_hour = 60;
    const int hours_per_day = 24;
    long days, hours, mins, secs, tsecs, temp;

    cout << "Enter the number of seconds:";
    cin >> tsecs;

    // Calculation: using temp as a temporary variable
    temp = tsecs / secs_per_min;
    secs = tsecs % secs_per_min;
    mins = temp;
    temp = mins / mins_per_hour;
    mins = mins % mins_per_hour;
    hours = temp;
    temp = hours / hours_per_day;
    hours = hours % hours_per_day;
    days = temp;

    cout << tsecs << " seconds = " << days << " days, " << hours << " hours, "
    << mins << " minutes, " << secs << " seconds" << endl;

    system("pause");
    return 0;
}
