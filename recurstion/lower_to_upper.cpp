#include<iostream>
using namespace std;
void solve(string &str,int i)
{
    if(i==str.length())
    return;
    str[i]='A'+str[i]-'a';
    solve(str,i+1);

}
void lower_to_upper(string &str)
{
    int i=0;
    solve(str,i);
}

int main()
{
   string str="shahid";
   lower_to_upper(str);
   cout<<str;
}