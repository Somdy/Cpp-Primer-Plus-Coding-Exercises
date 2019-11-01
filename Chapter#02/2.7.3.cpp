#include <iostream>

using namespace std;

void fun_1();
void fun_2();

int main() {

    fun_1();
    fun_1();
    fun_2();
    fun_2();

    system("pause");
    return 0;
}

void fun_1() {
    cout << "Three blind mice" << endl;
}

void fun_2() {
    cout << "See how they run" << endl;
}
