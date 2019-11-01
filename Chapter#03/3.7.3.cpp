#include <iostream>

int main() {
    using namespace std;

    const double mins_per_degree = 60; // 60 mins go to one degree
    const double secs_per_min = 60; // 60 secs go to one min
    double degrees, mins, secs, totaldegrees, totalmins;

    cout << "Enter a latitude in degrees, minutes and seconds:" << endl
    << "First, enter the degrees:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> mins;
    cout << "Finally, enter the seconds of arc:";
    cin >> secs;

    // Conversion
    totalmins = mins + secs / secs_per_min;
    totaldegrees = degrees + totalmins / mins_per_degree;

    cout << degrees << " degrees, " << mins << " minutes, " << secs << " seconds = "
    << totaldegrees << " degrees" << endl;

    system("pause");
    return 0;
}
