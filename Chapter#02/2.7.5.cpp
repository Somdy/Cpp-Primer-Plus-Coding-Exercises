#include <iostream>

using namespace std;

float converter(float n);

int main() {
    float cT, fT;

    cout << "Please enter a Celsius value:";
    cin >> cT;
    fT = converter(cT);
    cout << cT << " degrees Celsius is " << fT << " degrees Fahrenheit." << endl;

    system("pause");
    return 0;
}

float converter(float n) {
    return 1.8 * n + 32.0;
}
