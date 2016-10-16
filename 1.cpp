#include <iostream>
using namespace std;

int main () {
    int number1, number2;
    
    cout << "Enter the first number: " << endl;
    cin >> number1;
    
    cout << "Enter the second number: " << endl;
    cin >> number2;
    
    if (number1 > number2)
        cout << "The biggest number is " << number1 << ", while the smallest number is " << number2 << endl;
    else
        cout << "The biggest number is " << number2 << ", while the biggest number is " << number1 << endl;
    
    return 0;
}
