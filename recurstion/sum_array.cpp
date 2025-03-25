//method-01
// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int> &arr,int index,int sum,int size)
// {
//     if(index==size)
//     return sum;
//     sum=sum+arr[index];
//     return solve(arr,index+1,sum,size);
// }
// int sum(vector<int> arr)
// {
//     int index=0;
//     int sum=0;
//     int size=arr.size();
//     return solve(arr,index,sum,size);
// }

// int main()
// {
//     vector<int> arr={3,4,5};
//     cout<<"sum of array:"<<sum(arr);
// }

//method-02
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &arr,int index)
{
    if(index==0)
    return arr[index];
    return arr[index]+solve(arr,index-1);
}
int sum(vector<int> arr)
{
    int index=arr.size()-1;
    return solve(arr,index);
}

int main()
{
    vector<int> arr={3,4,5,8,2};
    cout<<"sum of array:"<<sum(arr);
}