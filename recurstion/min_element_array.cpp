#include<iostream>
//#include<algorithm>
#include<vector>
using namespace std;
int solve(vector<int> &arr,int index)
{    
    //base condition
    if(index==arr.size()-1)
    return arr[index];

    //recursive tree
    return min(arr[index],solve(arr,index+1));
}
int min_element(vector<int> &arr)
{
     int index=0;
     solve(arr,index);
}

int main()
{
    vector<int> arr={3,4,5,-1,0};
     cout<<"min element:"<<min_element(arr);
}