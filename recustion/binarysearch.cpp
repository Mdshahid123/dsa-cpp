#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int> &v,int target,int size,int i,int j)
{
     //base condition
     if(i>j)
     return false;
    //chek at mid
     int mid=i+(j-i)/2;
     if(target==v[mid])
     return true;

     // otherwise left call
     else if(target>v[mid])
     return search(v,target,size,mid+1,j);

     // and right call
     else{
       return search(v,target,size,i,mid-1);
     }
}
bool binary_search(vector<int> &v,int target,int size)
{    
     int i=0;
     int j=size-1;
     return search(v,target,size,i,j);
    
}

int main()
{
    vector<int> v={1,3,5,7,9};
    int target=45;
    int size=v.size();
    cout<<binary_search(v,target,size);

}