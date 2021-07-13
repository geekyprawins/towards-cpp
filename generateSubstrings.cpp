#include <bits/stdc++.h>
using namespace std;

void generateSubstrings(string s, string ans)
{

    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }

    char c = s[0];
    string restOfString = s.substr(1);
    generateSubstrings(restOfString, ans);
    generateSubstrings(restOfString, ans + c);
}

int main()
{
    generateSubstrings("abcdef", "");
    return 0;
}