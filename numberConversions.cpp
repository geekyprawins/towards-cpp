#include <bits/stdc++.h>
using namespace std;
// binary to decimal function
int binaryToDecimal(int n)
{
    int lastDigit, decNum = 0, powerOf2 = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        decNum += (lastDigit * pow(2, powerOf2));
        powerOf2++;
        n /= 10;
    }
    return decNum;
}

// octal to decimal function

int octalToDecimal(int n)
{
    int lastDigit, decNum = 0, powerOf8 = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        decNum += (lastDigit * pow(8, powerOf8));
        powerOf8++;
        n /= 10;
    }
    return decNum;
}
// hexadecimal to decimal

int hexadecimalToDecimal(string n)
{
    int decNum = 0, powerOf16 = 0;
    int size = n.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (n[i] >= 'A' && n[i] <= 'F')
        {
            decNum += ((n[i] - 'A' + 10) * pow(16, powerOf16));
        }
        else if (n[i] >= '0' && n[i] <= '9')
        {
            decNum += ((n[i] - '0') * pow(16, powerOf16));
        }
        powerOf16++;
    }
    return decNum;
}

// decimal to binary

void decimalToBinary(int n)
{ // storing remainder when divided by 2 in an array
    int binArr[32];
    int i = 0;
    while (n > 0)
    {

        binArr[i] = n % 2;
        n /= 2;
        i++;
    }
    // printing the array in the reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binArr[j];
    }
}
// decimal to octal

void decimalToOctal(int n)
{ // storing remainder when divided by 2 in an array
    int octArr[32];
    int i = 0;
    while (n > 0)
    {

        octArr[i] = n % 8;
        n /= 8;
        i++;
    }
    // printing the array in the reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << octArr[j];
    }
}
// decimal to hexadecimal

void decimalToHexadecimal(int n)
{
    char hexArr[100];
    int i = 0;

    while (n > 0)
    {

        int temp = n % 16;
        if (temp < 10)
        {
            hexArr[i] = temp + 48;
        }
        else
            hexArr[i] = temp + 55;

        n /= 16;
        i++;
    }
    // printing the array in the reverse order
    for (int j = i - 1; j >= 0; j--)
    {

        cout << (hexArr[j]);
    }
}

int main()
{
    // binary to decimal conversion

    int n1;
    cout << "Enter any binary number : ";
    cin >> n1;

    cout << "Decimal equivalent is : " << binaryToDecimal(n1) << endl;

    // octal to decimal coversion
    int n2;
    cout << "Enter any octal number : ";
    cin >> n2;
    cout << "Decimal equivalent is : " << octalToDecimal(n2) << endl;

    // hexadecimal to decimal conversion
    string n3;
    cout << "Enter any hexadecimal number : ";
    cin >> n3;
    cout << "Decimal equivalent is : " << hexadecimalToDecimal(n3) << endl;

    // decimal to  binary conversion

    int n4;
    cout << "Enter any decimal number : ";
    cin >> n4;

    cout << "Binary equivalent is : ";
    decimalToBinary(n4);
    cout << endl;

    // decimal to octal conversion
    int n5;
    cout << "Enter any decimal number : ";
    cin >> n5;

    cout << "Octal equivalent is : ";
    decimalToOctal(n5);
    cout << endl;

    // decimal to hexadecimal conversion
    int n6;
    cout << "Enter any decimal number : ";
    cin >> n6;

    cout << "Hexadecimal equivalent is : ";
    decimalToHexadecimal(n6);
    cout << endl;
    // binary addition
    int a, b;
    cout << "Enter any two binary numbers : ";
    cin >> a >> b;
    int decOfa = binaryToDecimal(a);
    int decOfb = binaryToDecimal(b);
    int sum = decOfa + decOfb;
    cout << "The sum in binary is : ";
    decimalToBinary(sum);
    cout << endl;
    return 0;
}
