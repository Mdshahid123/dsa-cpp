/* A Top-Down DP implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;

int lcs(char* X, char* Y, int m, int n,vector<vector<int> >& dp)
{
	if (m == 0 || n == 0)
		return 0;

    if (dp[m][n] != -1) {
		return dp[m][n];
	}

	if (X[m - 1] == Y[n - 1])
		return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);

	else{
            return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
						          lcs(X, Y, m - 1, n, dp));
    }
}

int main()
{
	char X[] = "shahid";
	char Y[] = "fahad";

	int m = strlen(X);
	int n = strlen(Y);
	vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
	cout << "Length of LCS is " << lcs(X, Y, m, n, dp);
    return 0;
}
