#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double pennies, dimes, nickles, total, quarters;
    
    cout << "Enter the number of pennies" << endl;
    cin >> pennies;
    cout << "Enter the number of nickels" << endl;
    cin >> nickles;
    cout << "Enter the number of dimes" << endl;
    cin >> dimes;
    cout << "Enter the number of quarters" << endl;
    cin >> quarters;
    
    total = (pennies * 0.01) + (nickles * 0.05) + (dimes * 0.1) + (quarters * 0.25);
    
    if (total == 1.00)
        cout << "Congratulations! You win the game!" << endl;
    if (total < 1.00 && total >0)
        cout << "Sorry, you entered less than a dollar." << endl;
    
    return 0;
}
