#include <iostream>
using namespace std;

#define MAX_VALUE 50

int main()
{
    for(unsigned char i = 2; i <= 50; i += 2)
    {
        cout << static_cast<int>(i) << " ";
    }
    
    return 0;
}
