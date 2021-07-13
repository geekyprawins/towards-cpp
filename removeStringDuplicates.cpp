#include <bits/stdc++.h>
using namespace std;

string removeStringDuplicates(string s)
{

    if (s.size() == 0)
    {
        return "";
    }
    char c = s[0];
    string answer = removeStringDuplicates(s.substr(1));
    if (c == answer[0])
    {
        return answer;
    }
    else
    {
        return c + answer;
    }
}

int main()
{

    cout << removeStringDuplicates("aaabbbbccceeeeeeeedddd");

    return 0;
}