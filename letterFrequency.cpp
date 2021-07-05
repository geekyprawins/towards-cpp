#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << str << endl;

    int freq[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
    }
    char ans = 'a';
    int maxFreq = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            ans = 'a' + i;
        }
    }
    cout << maxFreq << " " << ans << endl;
    return 0;
}
