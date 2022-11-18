#include <iostream>
using namespace std;
// we use void here bcos we don't want to return anything..we just have to print counting

void Counting(int n)
{   
    //function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    //function call
    Counting(n);
}