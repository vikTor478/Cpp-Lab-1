#include <iostream>
using namespace std;

int main() 
{
    string userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    int result = 0;

    for (int i = 0; i < userInput.size(); i++) 
    {
        result += userInput[i] - '0';
    }

    cout << "Sum of digits: " << result << endl;
    return 0;
}
