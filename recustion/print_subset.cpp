#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int> &arr,int i,vector<int> &ans)
{
     //base case
     if(i==arr.size())
     {  cout<<"{";
        for(int val:ans)
        {
            cout<<" "<<val<<" ";
        }
        cout<<"},";

        return ;
     }

     //include
     ans.push_back(arr[i]);
     subset(arr,i+1,ans);

     ans.pop_back();
     subset(arr,i+1,ans);
}

void print_subset(vector<int> &arr)
{
      int i=0;
      vector<int> ans;
      subset(arr,i,ans);
}

int main()
{
    vector<int> arr={1,2,3};
    print_subset(arr);
}