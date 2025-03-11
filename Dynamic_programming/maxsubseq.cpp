#include <iostream>
#include <vector>

using namespace std;

vector<string> getMaxLengthSubsequences(string s) {
    vector<string> result;
    result.push_back(s); // Store the original string as the longest subsequence
    return result;
}

int main() {
    string s = "abc";
    vector<string> maxSubsequences = getMaxLengthSubsequences(s);

    cout << "Longest Subsequences:\n";
    for (const string& sub : maxSubsequences) {
        cout << sub << endl;
    }

    return 0;
}
