#include<iostream>
#include<algorithm>
using namespace std;


void bubble_sort(int arr[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        //finding biggest element
        int temp=0;
        for(int i=0;i<n-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                temp=1;
            }
        }
        if(temp==0)
        break;
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
    bubble_sort(arr,n);
    cout<<"sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}

// time complexity

// best case :o(n) as if element is already sorted than so we don't need to swap so after first iteration
//  we break the loop

// worst-case:o(n^2)