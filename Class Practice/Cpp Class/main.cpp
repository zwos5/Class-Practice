#include <iostream>
#include "practice.h"

using namespace std;

int main()
{
    Practice success;
    
    cout << "Please enter a string: " << endl;
    cin >> success.x;
    cout << "Please enter an int: " << endl;
    cin >> success.num;
    cout << "Now enter a float (ex. 3.09): " << endl;
    cin >> success.value;
    
    cout << "Your object of class practice has a string value of " << success.x << endl;
    cout << "Your object of class practice has an int value of " << success.num << endl;
    cout << "Your object of class practice has a float value of " << success.value << endl;

    cout << "This is a practice program working with a class." << endl;

    return 0;
}