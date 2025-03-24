#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int> &length,vector<int> &price,int N,int size)
{  
    //base condition
    if(N==0 || size==0)
    return 0;
    //recursive tree
    if(length[size-1]<=N)
    {
        //we have two chices
        //include
         int include=price[size-1]+max_profit(length,price,N-length[size-1],size);
        //exclude
        int exclude=0+max_profit(length,price,N,size-1);


        return max(include,exclude);

    }

    else{
        //we don't have choices
        return max_profit(length,price,N,size-1);
    }
}
int main()
{
    vector<int> length={1,2,3};
    vector<int> price={1,5,8};
    int N=3;
    int ans=max_profit(length,price,N,length.size());

    cout<<"max profit:"<<ans;

}