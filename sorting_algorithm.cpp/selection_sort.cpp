//descending order
//best-case=o(n^2),woestcaseo(n^2) and bestcaseo(n^2)
#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

void selection(int arr[],int n)
{  // no of round
    for(int i=0;i<n-1;i++)
    {   
        int ans=INT_MIN;
        int min_index;
        //minimum element
        for(int j=i;j<n;j++)
        {
              if(arr[j]>ans)
              {
                ans=arr[j];
                min_index=j;

              }

        }

        swap(arr[min_index],arr[i]);
    }
}

int main()
{

    int arr[1000];
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the element of an array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    cout<<"sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}
