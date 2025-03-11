//finding a fibonacci number in fibonacci series by top down upproch with memorization

#include<iostream>
#include<vector>
using namespace std;

int fib(int n)
{  
  //wrong postion
    if(n<0)
    return -1;
  //base condtion
    else if(n==0)
    return 0;

    else if(n==1)
    return 1;
  //memorisation
   static vector<int> v(n+1,-1);
   if(v[n]!=-1)
   return v[n];
   return v[n]=fib(n-1)+fib(n-2);
}

int main()
{    int fnum;
     cout<<"enter the fib number you want:";
     cin>>fnum;
     cout<<"fib of "<<fnum<<" is:"<<fib(fnum);

}


//t(n):-_o(n)___ && s(n):-__o(n)___