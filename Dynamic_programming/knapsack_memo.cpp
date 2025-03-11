#include<iostream>
#include<vector>
using namespace std;

int memoknapsack(int profitv[],int iwt[],int bwt,int n)
{
    //base condition
    if(bwt==0 ||n==0)
    return 0;
    //cheking computaion result

    static vector<vector<int>> dp(n+1,vector<int>(bwt+1, -1));

    if(dp[n][bwt]!=-1)
    return dp[n][bwt];

    //recursive tree code
     if(iwt[n-1]<=bwt)
     {
       return  dp[n][bwt]=max( profitv[n-1]+memoknapsack(profitv,iwt,bwt-iwt[n-1],n-1),
         0+memoknapsack(profitv,iwt,bwt,n-1));
     }

     else{
        return memoknapsack(profitv,iwt,bwt,n-1);
     }

}
int main()
{
    int profitv[]={1,4,5,7};
    int iwt[]={1,3,4,5};
    int bwt=7;
    int n=sizeof(profitv)/sizeof(profitv[0]);

    int profit=memoknapsack(profitv,iwt,bwt,n);
    cout<<"max profit is: "<<profit;

    return 0;

}

// time complexity

//t(n)=_o(2^n)_ and s(n)=_o(n)_