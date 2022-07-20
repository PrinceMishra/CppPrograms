#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int counter=n;
    int sum=0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if (sum == counter)
    {
        cout << "It's an armstrong number";
    }
    else
    {
        cout << "Sorry this number is not an armstrong number";
    }
    return 0;
}