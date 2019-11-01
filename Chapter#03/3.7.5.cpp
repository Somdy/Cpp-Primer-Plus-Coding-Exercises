#include <iostream>

int main() {
    using namespace std;

    long long worldpop, countrypop;
    double percent;

    cout << "Enter the world's population:";
    cin >> worldpop;
    cout << "Enter the population of the US:";
    cin >> countrypop;
    percent = (double) countrypop / worldpop * 100;
    cout << "The population of the US is " << percent
    << "% of the world population." << endl;

    system("pause");
    return 0;
}
