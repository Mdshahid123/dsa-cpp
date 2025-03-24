#include<iostream>
using namespace std;

pair<int, int> search(int arr[],int target,int size)
{
    int first_accurence=-1;
    int sec_accurence=-1;

     //finding the first accurence
    for(int i=0;i<=size-1;i++)
    {
        if(arr[i]==target)
        {
            first_accurence=i;
            break;

        }
    

    }

    //finding the second accurence
    if(first_accurence!=-1)
    {   
        for(int i=size-1;i>=0;i--)
       {
            if(arr[i]==target)
            {
                sec_accurence=i;
                break;
            }

       }
    }

     return make_pair(first_accurence, sec_accurence);
    

}

int main()
{
    int arr[1000];
    int size;
    cout<<"enter the size of an array:";
    cin>>size;
    cout<<"enter the element of an array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter target element:";
    cin>>target;
    pair<int, int> result = search(arr, target, size);
    cout << "First occurrence: " << result.first << ", Second occurrence: " << result.second << endl;
}


