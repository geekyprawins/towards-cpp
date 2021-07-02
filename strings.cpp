#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ // input a string
    string str;
    getline(cin, str);
    cout << str << endl;
    string str1 = "HelloWorld";
    cout << str1 << endl;
    // // string concatenate
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    // or s1 = s1+s2;
    cout << s1 << endl;

    // string clear
    s1.clear();
    // empty
    if (s1.empty())
    {
        cout << "String s1 is empty" << endl;
    }

    cout << s1 << endl;

    // string compare
    string a1 = "abc";
    string b1 = "xyz";
    cout << b1.compare(a1) << endl;
    // erase
    string c1 = "Hemnllo";
    c1.erase(2, 2);
    cout << c1 << endl;
    // find
    cout << c1.find("ell") << endl;
    // insert
    c1.insert(2, "mn");
    cout << c1 << endl;
    // length
    cout << c1.length() << endl;
    // substrings
    string c2 = c1.substr(2, 3);
    // string to Int

    string n1 = "1234";
    int x = stoi(n1);
    cout << x + 2 << endl;

    int y = 143;
    cout << to_string(y) + "23" << endl;
    // sort

    string sort1 = "xyzabcfgdref";
    sort(sort1.begin(), sort1.end());
    cout << sort1 << endl;

    return 0;
}