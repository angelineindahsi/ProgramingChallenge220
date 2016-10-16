#include <iostream>
using namespace std;

int main () {
    int length1, width1, length2, width2, area1, area2;
    
    cout << "Enter the length of rectangle 1" << endl;
    cin >> length1;
    cout << "Enter the width of rectangle 1" << endl;
    cin >> width1;
    cout << "Enter the length of rectangle 2" << endl;
    cin >> length2;
    cout << "Enter the width of rectangle 2" << endl;
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 > area2)
        cout << "The area of rectangle 1 is bigger than the area of rectangle 2." << endl;
    else if (area2 < area1)
        cout << "The area of rectangle 2 is bigger than the area of rectangle 1." << endl;
    else if (area1 == area2)
        cout << "The area of rectangle 1 and rectangle 2 is the same." << endl;
    
    return 0;
}
