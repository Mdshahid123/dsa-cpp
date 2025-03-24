//in this problem we are given a sum and array we have to check whather then any subset of given array give sum ==sum
#include<iostream>
using namespace std;
void sumSubSet(int currentsum,int arr[],int index,int size,int sum)
{   
     if(index==size)
     {
        if(currentsum==sum)
        {
            cout<<"ture";
        }
        else{
            return ;
        }

        //include
       currentsum=currentsum+arr[size-size]+sumSubSet(currentsum,arr,index+1,size,sum);
       //exclude
       sumSubSet(currentsum,arr,index+1,size,sum);

     } 
}

int main()
{
    int arr[]={1,6,5,4};
    int sum=7;
    int currentsum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    sumSubSet(currentsum,arr,0,size,sum);
}