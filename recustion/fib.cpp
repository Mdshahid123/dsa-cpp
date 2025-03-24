#include<iostream>
using namespace std;
int fib(int n)
{
    //base case
    if(n==0||n==1)
    return n;

    //recursive tree
    return fib(n-1)+fib(n-2);

}

int main()
{   int n=2;
    cout<<"fib of "<<n<<":"<<fib(n);
}