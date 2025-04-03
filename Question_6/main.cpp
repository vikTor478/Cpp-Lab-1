#include <iostream>
using namespace std;

void reverseNumber(int number) 
{
    if (number == 0) return;
    cout << number % 10;
    reverseNumber(number / 10);
}

int main() 
{
    int userNumber;
    cout << "Enter an integer: ";
    cin >> userNumber;
    cout << "Reversed number: ";
    reverseNumber(userNumber);
    cout << endl;
    return 0;
}   