#include <iostream>
using namespace std;

#define SQUARE(x) ((x) * (x))

int main() 
{
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;
    cout << "The square of " << userInput << " is " << SQUARE(userInput) << endl;
    return 0;
}
