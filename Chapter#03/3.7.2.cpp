#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    const double inches_per_foot = 12; // 12 inches go to one foot
    const double meters_per_inch = 0.0254; // 1 inch goes to 0.0254 meters
    const double pounds_per_kg = 2.2; // 2.2 pounds go to 1 kg
    double BMI, weight, height, inches, feet;

    // Calculate the height
    cout << "Enter your height in feet:";
    cin >> feet;
    cout << "Enter your remainder height in inches:";
    cin >> inches;
    height = feet * inches_per_foot + inches; // convert all into inches
    height = height * meters_per_inch; // convert all into meters

    // Calculate the weight
    cout << "Enter your weight in pounds:";
    cin >> weight;
    weight = weight / pounds_per_kg; // convert all into kg

    //Calculate the BMI
    BMI = weight / pow(height, 2);
    cout << "Your BMI is " << BMI << endl;

    system("pause");
    return 0;
}
