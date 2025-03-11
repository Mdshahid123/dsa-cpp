#include<iostream>
using namespace std;

int knapsack(int val[],int wt[],int w,int n)
{
    //base condition
    if(w==0 ||n==0)
    return 0;

    //recursive tree code
     if(wt[n-1]<=w)
     {
       return  max( val[n-1]+knapsack(val,wt,w-wt[n-1],n-1),
         0+knapsack(val,wt,w,n-1));
     }

     else{
        return knapsack(val,wt,w,n-1);
     }

}
int main()
{
    int profitv[]={1,4,5,7};
    int wt[]={1,3,4,5};
    int w=7;
    int n=sizeof(profitv)/sizeof(profitv[0]);

    int profit=knapsack(profitv,wt,w,n);
    cout<<"max profit is: "<<profit;

    return 0;

}

// time complexity

//t(n)=_o(2^n)_ and s(n)=_o(n)_