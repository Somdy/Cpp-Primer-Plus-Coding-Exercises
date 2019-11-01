#include <iostream>

int main() {
    using namespace std;

    int dlong, yards;

    cout << "Enter a distance in long:";
    cin >> dlong;
    yards = 220 * dlong;
    cout << dlong << " long equals " << yards << " yards." << endl;

    system("pause");
    return 0;
}
