#include<iostream>
using namespace std;


void print(int n)
{  //base cond
    if(n==1)
    {
       cout<<"1\n";
       return;
    }
    cout<<n<<"\n";
    print(n-1);
}

int main()
{
    print(4);
}