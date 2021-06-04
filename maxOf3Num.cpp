#include <iostream>
using namespace std;

int main()
{
    int a, b, c, maxof3;

    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            maxof3 = a;
        }
        else
        {

            maxof3 = c;
        }
    }
    else
    {
        if (b > c)
        {
            maxof3 = b;
        }
        else
        {
            maxof3 = c;
        }
    }
    cout << "The max of " << a << " ," << b << " ," << c << " is " << maxof3 << endl;

    return 0;
}
