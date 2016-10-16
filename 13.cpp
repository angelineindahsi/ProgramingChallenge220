#include <iostream>
using namespace std;

int main() {
    int books, points;
    
    cout << "Enter no of books purchased this month." << points << endl;
    cin >> books;
    
    if (books == 0) {points = 0;
        cout << "Points earned: " << points << endl;}
    if (books == 1) {points = 5;
        cout << "Points earned: " << points << endl;}
    if (books == 2) {points = 15;
        cout << "Points earned: " << points << endl;}
    if (books == 3) {points = 30;
        cout << "Points earned: " << points << endl;}
    if (books >= 4) {points = 60;
        cout << "Points earned: " << points << endl;}
    
    return 0;
}
