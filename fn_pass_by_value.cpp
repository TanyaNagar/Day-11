#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << " n is " << n << endl;  // n=11 
}
int main()
{

    int n;
    cin >> n;  //n=10

    dummy(n);

    cout << "number n is " << n << endl; //n=10

    return 0;
}