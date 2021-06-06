#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    int num;
    cout << "Enter any number : ";
    cin >> num;
    int i;
    bool flag = true;

    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime" << endl;
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "A prime number" << endl;
    }
    // or can be solved as: 
    // if (i == sqrt(num))
    // {
    //     cout << "A prime number" << endl;
    // }
    return 0;
}