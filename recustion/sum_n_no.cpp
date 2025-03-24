#include<iostream>
using namespace std;
int sum(int num)
{
    if(num==1)
    return 1;

    //recursive tree
    return sum(num-1)+num;
}

int main()
{
    int num=3;
    cout<<"sum:"<<sum(num);
}
