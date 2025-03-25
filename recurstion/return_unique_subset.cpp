#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> &arr, int i, vector<int> &ans, vector<vector<int>> &allsubset) {
    // Base case
    if (i == arr.size()) {
        allsubset.push_back(ans);
        return;
    }

    // Include the current elemeent
    ans.push_back(arr[i]);
    subset(arr, i + 1, ans, allsubset);
    ans.pop_back();

    // Exclude the current element
       int idx=i+1;
       while(idx<arr.size()&&arr[idx]==arr[idx-1])idx++;
       subset(arr, idx, ans, allsubset);
}

vector<vector<int>> return_all_subset(vector<int> &arr) {
    vector<int> ans;
    vector<vector<int>> allsubset;
    subset(arr, 0, ans, allsubset);
    return allsubset;
}

int main() {
    vector<int> arr = {1, 2, 2};
    vector<vector<int>> subsets = return_all_subset(arr);

    // Print all subsets
    cout << "{ ";
    for (const vector<int> &subset : subsets) {
        cout << "{ ";
        for (int val : subset) {
            cout << val << " ";
        }
        cout << "} ";
    }
    cout << "}" << endl;

    return 0;
}
