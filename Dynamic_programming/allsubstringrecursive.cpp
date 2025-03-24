#include <iostream>
#include <vector>
using namespace std;

void sub(string current,string s,int index,vector<string> &result)
{
     if(index==s.length())
     return ;
     current=current+s[index];
     result.push_back(current);
     sub(current,s,index+1,result);
}

vector<string> getAllSubstrings(string s)
{      vector<string> result;
       string current="";
       for(int i=0;i<s.length();i++)
       {
          sub(current,s,i,result);
       }

       return result;
}


// Driver code
int main() {
    string s = "shahid";
    vector<string> substrings = getAllSubstrings(s);

    cout << "All Substrings:\n";
    for (const string sub : substrings) {
        cout << sub << endl;
    }

    return 0;
}