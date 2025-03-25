#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> &arr,int index)
{
    if(index==-1)
    return;

    cout<<arr[index]<<" ";
    solve(arr,index-1);

}
void print(vector<int> &arr)
{
    int index=arr.size()-1;
    solve(arr,index);
}

int main()
{
    vector<int> arr={4,3,6,7,8,9};
    print(arr);
}