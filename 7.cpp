#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double seconds, hour, day;
    hour = 3600;
    day = 86400;
    
    cout << "Enter the number of seconds"<< endl;
    cin >> seconds;
    
    if (seconds >= 86400)
        cout << "The number of seconds you entered = " << seconds / 86400 << " days" << endl;
    else
    {
        if (seconds <= 3600)
            cout << "The number of seconds you entered = " << seconds / 3600 << " minutes" << endl;
    }
        if (seconds >= 60)
            cout << "The number of seconds you entered = " << seconds / 60 << " minutes" << endl;
    else
    {
        if (seconds < 60)
            cout << "The number of seconds you entered = " << seconds << " seconds" << endl;
    }
    
    return 0;
}


