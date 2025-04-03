#include <iostream>
#include <cctype>  // Required for islower(), isupper() and isdigit()

using namespace std;

int main()
{
    bool again = true;

    while(again)
    {
        string userInput;
        cout << "Enter your password: ";
        cin >> userInput;

        string weakPasswordOutput = "Weak Password - The password should contain at least one: ";

        if(userInput.size() < 8)
        {
            cout <<"Weak Password - Minimum password length should be 8 characters"<< endl;

            string userInput;
            cout << "Try again?(y/n) ";
            cin >> userInput;

            if(userInput == "n") 
            { 
                again = false; 
                break;
            }
        }
        else
        {
            string specialCharacters = ".,!@#$%^&*";
            bool specialCharacterPass = false;
            bool uppercaseLetterPass = false;
            bool lowercaseLetterPass = false;
            bool digitPass = false;

            for(int i = 0; i < userInput.size(); i++)
            {
                for (int j = 0; j < specialCharacters.size(); j++) 
                {
                    if (userInput[i] == specialCharacters[j]) 
                    {
                        specialCharacterPass = true;
                        break;
                    }
                }

                if(isupper(userInput[i]))
                {
                    uppercaseLetterPass = true;
                }

                if(islower(userInput[i]))
                {
                    lowercaseLetterPass = true;
                }

                if(isdigit(userInput[i]))
                {
                    digitPass = true;
                }
            }

            if(!specialCharacterPass)
            {
                weakPasswordOutput += "special character";
            }

            if(!uppercaseLetterPass)
            {
                if(!specialCharacterPass)
                {
                    weakPasswordOutput += ", uppercase letter";
                }
                else
                {
                    weakPasswordOutput += " uppercase letter";
                }
            }

            if(!lowercaseLetterPass)
            {
                if(!specialCharacterPass || !uppercaseLetterPass)
                {
                    weakPasswordOutput += ", lowercase letter";
                }
                else
                {
                    weakPasswordOutput += " lowercase letter";
                }
            }

            if(!digitPass)
            {
                if(!specialCharacterPass || !uppercaseLetterPass || !lowercaseLetterPass)
                {
                    weakPasswordOutput += ", digit";
                }
                else
                {
                    weakPasswordOutput += " digit";
                }
            }

            if(specialCharacterPass && lowercaseLetterPass && uppercaseLetterPass && digitPass)
            {
                cout << "Strong Password" << endl;  
            }
            else
            {
                cout << weakPasswordOutput << endl;
            }

            string userInput;
            cout << "Try again?(y/n) ";
            cin >> userInput;

            if(userInput == "n") { again = false; }
            
        }
    }

    return 0;
}
