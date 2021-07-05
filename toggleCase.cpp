#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << str << endl;

    for (int i = 0; i < str.length(); i++)
    { // to upper case
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        // to lower case
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else
            continue;
    }
    cout << "Toggled String is " << str << endl;

    // using transform function 
       // to upper
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
       // to lower
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    return 0;
}