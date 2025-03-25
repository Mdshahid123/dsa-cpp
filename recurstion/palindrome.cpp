#include<iostream>
#include<vector>
using namespace std;
bool solve(string str,int start,int end)
{
    if(start>end)
    return true;

    else if(str[start]!=str[end])
    return false;

    else{
        return solve(str,start+1,end-1);
    }
}
bool palin(string str)
{
   int start=0;
   int end=str.length()-1;
   return solve(str,start,end);
}

int main()
{
   string str="level";
   cout<<palin(str);
}