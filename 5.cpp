#include <iostream>
using namespace std;

int main () {
    double weight, height, bmi;
    
    cout << "Enter your weight (in pounds)" << endl;
    cin >> weight;
    cout << "Enter your height (in inches)" << endl;
    cin >> height;
    
    bmi = (weight * 703) / (height * height);
    
    if (bmi < 18.5)
        cout << "You are underweight!" << endl;
    if (bmi >= 18.5)
        cout << "Your weight is optimal!" << endl;
    if (bmi <= 25)
        cout << "Your weight is optimal!" << endl;
    if (bmi > 25)
        cout << "You are overweight!" << endl;
    
    return 0;
}
