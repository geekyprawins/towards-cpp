#include <bits/stdc++.h>
using namespace std;

string keyPadArray[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keyPadWords(string s, string ans)
{

    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    string temp = keyPadArray[c - '0'];
    string restOfString = s.substr(1);
    for (int i = 0; i < temp.size(); i++)
    {
        keyPadWords(restOfString, ans + temp[i]);
    }
}
int main()
{
    keyPadWords("23", "");
    return 0;
}