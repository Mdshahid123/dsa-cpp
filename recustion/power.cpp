#include<iostream>
using namespace std;

int p(int base,int power)
{
    if(power==0)
    return 1;

    //rt
    return p(base,power-1)*2;
}

int main()
{
    int base=2;
    int power=5;

    cout<<p(base,power);
}