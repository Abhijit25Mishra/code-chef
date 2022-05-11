// C++ program to find number of permutation
// with K inversions

#include <bits/stdc++.h>
using namespace std;

int numberOfPermWithKInversions(int N, int K)
{
    vector<vector<int>> dp(N + 1, vector<int>(K + 1));

    // As for k=0, number of permutations is 1 for every N
    for (int i = 1; i <= N; i++)
        dp[i][0] = 1;

    // Using Dynamic Programming with cumulative sum
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            // This is same as val = dp[i-1][j] - dp[i-1][j-i]
            // i.e. dp[i-1][j........j-i], just taking care of
            // boundaries
            int val = dp[i - 1][j];
            if (j >= i)
                val -= dp[i - 1][j - i];

            dp[i][j] = dp[i][j - 1] + val;
        }
    }

    // And, in the end calculate the dp[n][k]
    // which is dp[n][k]-dp[n][k-1]
    int ans = dp[N][K];
    if (K >= 1)
        ans -= dp[N][K - 1];

    return ans;
}

int main()
{
    int N = 6;
    int K = 1;

    cout << numberOfPermWithKInversions(N, K) << "\n";
    return 0;
}
