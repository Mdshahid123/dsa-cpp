#include<iostream>
using namespace std;
int sq_sum(int num)
{
   if(num==1)
   return 1;

   return sq_sum(num-1)+num*num;

}
int main()
{
    int num=5;
    cout<<sq_sum(num);
    return 0;
}