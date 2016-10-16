#include <iostream>
using namespace std;

int main () {
    int month, day, year;
    
    cout << "Enter a month (m)" << endl;
    cin >> month;
    
    cout << "Enter a day" << endl;
    cin >> day;
    
    cout << "Enter a two digit year" << endl;
    cin >> year;
    
    if (month * day == year)
        cout << "Yay! The date is magic!" << endl;
    else
        cout <<"The date is not magic.." << endl;
    
    return 0;
}
