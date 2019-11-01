#include <iostream>

int main() {
    using namespace std;

    int age, months;

    cout << "Enter your age:";
    cin >> age;
    months = age * 12;
    cout << "You have lived " << months << " months." << endl;

    system("pause");
    return 0;
}
