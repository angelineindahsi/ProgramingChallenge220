#include <iostream>
using namespace std;

int main () {
    string color1=" ", color2=" ";
    
    cout << "Enter two primary colors!" << endl;
    cin >> color1;
    cin >> color2;
    
    if (color1 == "red" && color2 == "blue")
        cout << "The two colors will become purple" << endl;
    if (color1 == "red" && color2 == "yellow")
        cout << "The two colors will become orange" << endl;
    if (color1 == "blue" && color2 == "yellow")
        cout << "The two colors will become green" << endl;
    
 
    return 0;
}
