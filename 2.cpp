#include <iostream>
using namespace std;

int main () {
    int number;
    
    cout << "Enter a number: " << endl;
    cin >> number;
    
    if (number <1 || number > 10)
        cout << "The number is invalid!" << endl;
    switch (number) {
        case 1: cout << "The Roman numeral is I" << endl;
            break;
        case 2: cout << "The Roman numeral is II" << endl;
            break;
        case 3: cout << "The Roman numeral is III" << endl;
            break;
        case 4: cout << "The Roman numeral is IV" << endl;
            break;
        case 5: cout << "The Roman numeral is V" << endl;
            break;
        case 6: cout << "The Roman numeral is VI" << endl;
            break;
        case 7: cout << "The Roman numeral is VII" << endl;
            break;
        case 8: cout << "The Roman numeral is VIII" << endl;
            break;
        case 9: cout << "The Roman numeral is IX" << endl;
            break;
        case 10: cout << "The Roman numeral is X" << endl;
            break;
    }
    
    return 0;
}
