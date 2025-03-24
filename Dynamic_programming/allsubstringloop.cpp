#include <iostream>
#include <vector>
using namespace std;

vector<string> getAllSubstrings(string s) {
    vector<string> substrings;
    int n = s.length();

    for (int i = 0; i < n; i++) { // Start index
        for (int j = i; j < n; j++) { // End index
            substrings.push_back(s.substr(i, j - i + 1)); // Extract substring
        }
    }

    return substrings;
}

int main() {
    string s = "abc";
    vector<string> substrings = getAllSubstrings(s);

    cout << "All Substrings:\n";
    for (const string &sub : substrings) {
        cout << sub << endl;
    }

    return 0;
}



