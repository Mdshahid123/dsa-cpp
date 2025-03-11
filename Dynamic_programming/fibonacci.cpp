// finding a fibonacci number in fibonacci series by top down upproch without memorization
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 0)
        cout << "wrong position";
    else if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int fnum;
    cout << "enter the fib number you want:";
    cin >> fnum;
    cout << "fib of " << fnum << " is:" << fib(fnum);
}

// t(n):-__o(2^n)__ && s(n):-__o(n)__