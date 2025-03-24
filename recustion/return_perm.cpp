#include <iostream>
#include <vector>
using namespace std;

void permu(vector<int> &arr, vector<vector<int>> &ans,int i)
{
    if (i== arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for(int j=i;j<=arr.size()-1;j++)
    {   
        
            swap(arr[i],arr[j]);
            permu(arr,ans,i+1);
            swap(arr[i],arr[j]);
        
        
        
    }
}

vector<vector<int>> get_permu(vector<int> &arr)
{
    vector<vector<int>> ans;
    int i = 0;
    
    permu(arr,ans,i);

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> allperm = get_permu(arr);

    cout << "{ ";
    for (const vector<int> &subset : allperm)
    {
        cout << "{ ";
        for (int val : subset)
        {
            cout << val << " ";
        }
        cout << "} ";
    }
    cout << "}" << endl;

    return 0;
}