#include<iostream>
using namespace std;
int solve(string str,int i)
{
   if(i==str.length())
   return 0;

   else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
   {
     return 1+solve(str,i+1);
   }
   else 
   {
    return solve(str,i+1);
   }
}
int count_vowels(string str)
{
    int i=0;
    return solve(str,i);

}

int main()
{
    string str="shpnm";
    cout<<"no of vowels:"<<count_vowels(str);
}