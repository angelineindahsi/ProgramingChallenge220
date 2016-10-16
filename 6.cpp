#include <iostream>
using namespace std;

int main () {
    double mass, weight;
    
    cout << "Enter an object's mass (in kg)" << endl;
    cin >> mass;
    
    weight = mass * 9.8;
    
    if (weight > 1000)
        cout << "The object is too heavy" << endl;
    if (weight < 10)
        cout << "The object is too light" << endl;
    
    return 0;
}
