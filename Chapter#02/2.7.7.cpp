#include <iostream>

using namespace std;

void converter(int n, int m);

int main() {
    int hours, mins;

    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> mins;
    converter(hours, mins);

    system("pause");
    return 0;
}

void converter(int n, int m) {
    cout << "Time: " << n << ":" << m << endl;
}
