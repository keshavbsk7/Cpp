#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isMatch(const string &s, const string &p) {
    int m = s.size(), n = p.size();
    vector<vector<bool>> dp(m + 1, n + 1, false);

    // dp[0][0] means both string and pattern are empty
    dp[0][0] = true;

    // Handle patterns with * at the beginning
    for (int j = 1; j <= n; ++j) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (p[j - 1] == '*') {
                // * can match an empty sequence (dp[i][j - 1])
                // or it can match one more character in the string (dp[i - 1][j])
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            } else if (p[j - 1] == '?' || s[i - 1] == p[j - 1]) {
                // ? matches any single character or characters match directly
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    string text = "adceb";
    string pattern = "*a*b";

    if (isMatch(text, pattern)) {
        cout << "Pattern matches the text." << endl;
    } else {
        cout << "Pattern does not match the text." << endl;
    }

    return 0;
}
