#include <bits/stdc++.h>
using namespace std;

void permutation(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        string restOfString = s.substr(0, i) + s.substr(i + 1);
        permutation(restOfString, ans + c);
    }
}
int main()
{
    permutation("abc", "");

    return 0;
}