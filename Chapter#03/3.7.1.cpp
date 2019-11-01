#include <iostream>

int main() {
    using namespace std;

    const int inches_per_foot = 12; // 12 inches go to one foot
    int height, inches, feet;

    cout << "Enter your height in inches:___\b\b\b";
    cin >> height;
    inches = height;
    feet = inches / inches_per_foot; // whole feet
    inches = inches % inches_per_foot; // remainder in inches
    cout << height << " inches are " << feet << " feet, " << inches << " inches." << endl;

    system("pause");
    return 0;
}
