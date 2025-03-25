#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> &arr,int index,int size)
{
    if(index==size)
    return;

    cout<<arr[index]<<" ";
    solve(arr,index+1,size);

}
void print(vector<int> &arr)
{
    int index=0;
    int size=arr.size();
    solve(arr,index,size);
}

int main()
{
    vector<int> arr={4,3,6,7,8,9};
    print(arr);
}