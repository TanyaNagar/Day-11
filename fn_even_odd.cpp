#include <iostream>
using namespace std;
// 1--> even         0 & 1-->F-->EVEN
// 0--> odd             1 & 1-->T-->ODD
bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    // even
    return 1;
}

int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}