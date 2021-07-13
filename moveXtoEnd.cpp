#include <bits/stdc++.h>
using namespace std;

string moveXtoend(string s)
{

    if (s.size() == 0)
    {
        return "";
    }

    char c = s[0];
    string answer = moveXtoend(s.substr(1));
    if (c == 'x')
    {
        return answer + "x";
    }
    else
    {
        return c + answer;
    }
}

int main()
{
    cout << moveXtoend("xxxabgdxxju") << endl;
    return 0;
}