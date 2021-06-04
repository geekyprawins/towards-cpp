#include <iostream>

using namespace std;
int main()
{

    float op1, op2, result;
    char op;

    cout << "Enter the two numbers : " << endl;
    cin >> op1 >> op2;
    cout << "Enter the operator : " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        result = op1 + op2;
        break;
    case '-':
        result = op1 - op2;
        break;
    case '/':
        result = op1 / op2;
        break;
    case '*':
        result = op1 * op2;
        break;

    default:
        cout << "Enter valid operator!" << endl;
        result = -1;

        break;
    }

    cout << "The result is " << result << endl;

    return 0;
}