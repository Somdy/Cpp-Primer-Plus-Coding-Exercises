#include <iostream>

using namespace std;

double converter(double n);

int main() {
    double lightyears, astrounits;

    cout << "Enter the number of light years:";
    cin >> lightyears;
    astrounits = converter(lightyears);
    cout << lightyears << " light years = " << astrounits << " astronomical units." << endl;

    system("pause");
    return 0;
}

double converter(double n) {
    return 63240 * n;
}
