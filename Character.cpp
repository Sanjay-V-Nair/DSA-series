#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is Lower case";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is Upper case";
    }
    else
    {
        cout << "This is a Number";
    }
    return 0;
}
