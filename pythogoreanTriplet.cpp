#include <iostream>
using namespace std;

int maxOf3Nums(int a, int b, int c)
{

    int maxof3;
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
    return maxof3;
}

bool isPythoTriplet(int a, int b, int c)
{
    int x, y, z;

    x = maxOf3Nums(a, b, c);
    if (a == x)
    {
        y = b;
        z = c;
    }
    else if (b == x)
    {
        y = a;
        z = c;
        /* code */
    }
    else
    {
        y = a;
        z = b;
    }
    if ((x * x) == (y * y + z * z))
    {
        return true;
    }
    else
        return false;
}

int main()
{

    int a, b, c;
    cout << "Enter any 3 numbers : ";
    cin >> a >> b >> c;
    if (isPythoTriplet(a, b, c))
    {
        cout << "Yay , its a Pythagorean triplet!";
    }
    else
        cout << "Nope, its not a Pythagorean Triplet";
}