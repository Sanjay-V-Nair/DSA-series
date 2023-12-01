#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number limit for sum of even numbers: ";
    cin >> n;
    int i = 0;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            i++;
        }
        else
        {
            i++;
        }
    }
    cout << "The Sum of all even numbers from 1 to " << n << " is: " << sum;
}