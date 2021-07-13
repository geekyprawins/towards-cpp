#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if (s.size() == 0)
    {
        return;
    }
    string restOfString = s.substr(1);
    reverse(restOfString);
    cout << s[0];
}
int main()
{
    reverse("helloSir");
}