#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n1, n2;

    cout << "Enter the two limits to print primes : ";
    cin >> n1 >> n2;

    if ((n1 >= 0 && n2 > 0) && (n1 < n2))
    {
        cout << "The primes in this range are: " << endl;
        for (int i = n1; i <= n2; i++)
        {
            if (isPrime(i))
            {
                cout << i << endl;
            }
        }
    }
    else
        cout << "Enter valid limits" << endl;

    return 0;
}
