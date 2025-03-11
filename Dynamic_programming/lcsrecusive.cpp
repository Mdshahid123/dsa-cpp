//Brute Force Approach Using Vectors
//Steps:

// Generate all subsequences of s1 and store them in a vector<string>.
// Generate all subsequences of s2 and store them in another vector<string>.
// Find the longest common subsequences by comparing the two vectors.
#include <iostream>
#include <vector>

using namespace std;

// Function to generate all subsequences of a string
void generateSubsequences(string s, int index, string current, vector<string> &subsequences) {
    if (index == s.length()) {
        subsequences.push_back(current); // Store the generated subsequence
        return;
    }

    // Include the current character
    generateSubsequences(s, index + 1, current + s[index], subsequences);

    // Exclude the current character
    generateSubsequences(s, index + 1, current, subsequences);
}

// Function to find longest common subsequences between two vectors
vector<string> findLongestCommonSubsequences(vector<string> &subseq1, vector<string> &subseq2) {
    vector<string> commonLCS;
    int maxLength = 0;

    // Compare each subsequence of subseq1 with subseq2 (manual checking)
    for (int i = 0; i < subseq1.size(); i++) {
        for (int j = 0; j < subseq2.size(); j++) {
            if (subseq1[i] == subseq2[j]) { // Found a common subsequence
                int len = subseq1[i].length();

                if (len > maxLength) {
                    maxLength = len;
                    commonLCS.clear();  // Clear previous shorter sequences
                    commonLCS.push_back(subseq1[i]);  // Store the new longest
                } else if (len == maxLength) {
                    commonLCS.push_back(subseq1[i]); // Store if it's same length
                }
            }
        }
    }

    return commonLCS;
}

// Driver code
int main() {
    string s1 = "abc";
    string s2 = "fde";

    // Generate subsequences
    vector<string> subseq1, subseq2;
    generateSubsequences(s1, 0, "", subseq1);
    generateSubsequences(s2, 0, "", subseq2);

    // Find longest common subsequences
    vector<string> longestCommonSubsequences = findLongestCommonSubsequences(subseq1, subseq2);

    // Output the result
    cout << "Longest Common Subsequences:\n";
    for (string lcs : longestCommonSubsequences) {
        cout << lcs << endl;
    }

    return 0;
}



// Time Complexity Analysis
// Generating all subsequences:

// Each string of length n has 2^n subsequences.
// Generating subsequences takes O(2^n) per string.
// Finding common subsequences:

// Finding an element in a vector takes O(n).
// O(2^n * 2^m) worst-case comparisons.
// Overall Complexity:

// O(2^n + 2^m + 2^n * 2^m) → O(2^n + 2^m) (Exponential).
