#include <iostream>
#include <vector>

using namespace std;

// Recursive function to generate all subsequences
void generateSubsequences(string s, int index, string current, vector<string> &subsequences) {
    if (index == s.length()) {
        subsequences.push_back(current); // Store the subsequence
        return;
    }

    // Include the current character
    generateSubsequences(s, index + 1, current + s[index], subsequences);

    // Exclude the current character
    generateSubsequences(s, index + 1, current, subsequences);
}

// Wrapper function to get all subsequences of a string
vector<string> getAllSubsequences(string s) {
    vector<string> subsequences;
    generateSubsequences(s, 0, "", subsequences);
    return subsequences;
}

// Driver code
int main() {
    string s = "abc";
    vector<string> subsequences = getAllSubsequences(s);

    cout << "All Subsequences:\n";
    for (int i = 0; i < subsequences.size(); i++) {
        cout << "\"" << subsequences[i] << "\"\n";
    }

    return 0;
}

//time and space compexity

