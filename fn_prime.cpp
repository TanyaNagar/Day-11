#include <iostream>
using namespace std;
// 0 --> not prime
// 1 --> is prime
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "is a prime no." << endl;
    }
    else
    {
        cout << "Not a prime no." << endl;
    }
}