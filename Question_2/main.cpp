#include <iostream>
#include <string>

using namespace std;

void toUpperCase(string &str) 
{
    for (int i = 0; i < str.size(); i++) 
    {
        str[i] = toupper(str[i]);
    }
} 

int countVowels(const string &str) 
{
    int count = 0;
    string vowels = "AEIOU";
    
    for (int i = 0; i < str.size(); i++) 
    {
        for (int j = 0; j < vowels.size(); j++) 
        {
            if (str[i] == vowels[j]) 
            {
                count++;
                break;
            }
        }
    }

    return count;
}

string reverseString(const string &str) 
{
    string reversed = "";

    for (int i = str.length() - 1; i >= 0; i--) 
    {
        reversed += str[i];
    }

    return reversed;
}

int main()
{
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    toUpperCase(inputString);
    cout << "Uppercase string: " << inputString << endl;
    
    int vowelCount = countVowels(inputString);
    cout << "Number of vowels: " << vowelCount << endl;
    
    string reversed = reverseString(inputString);
    cout << "Reversed string: " << reversed << endl;
    
    return 0;
}
