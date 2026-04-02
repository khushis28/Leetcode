class Solution {
public:
    int m, n;
    vector<vector<vector<int>>> dp;

    int solve(vector<vector<int>>& coins, int i, int j, int neu) {

        // Out of bounds
        if (i >= m || j >= n) return INT_MIN;

        // Base case
        if (i == m - 1 && j == n - 1) {
            if (coins[i][j] < 0 && neu > 0) return 0;
            return coins[i][j];
        }

        // Memo check
        if (dp[i][j][neu] != INT_MIN) {
            return dp[i][j][neu];
        }

        int best = INT_MIN;

        // Move Down
        int down = solve(coins, i + 1, j, neu);
        if (down != INT_MIN) {
            best = max(best, coins[i][j] + down);
        }

        // Move Right
        int right = solve(coins, i, j + 1, neu);
        if (right != INT_MIN) {
            best = max(best, coins[i][j] + right);
        }

        // Neutralize (skip negative)
        if (coins[i][j] < 0 && neu > 0) {
            int downSkip = solve(coins, i + 1, j, neu - 1);
            int rightSkip = solve(coins, i, j + 1, neu - 1);

            int skipBest = max(downSkip, rightSkip);
            if (skipBest != INT_MIN) {
                best = max(best, skipBest);
            }
        }

        return dp[i][j][neu] = best;
    }

    int maximumAmount(vector<vector<int>>& coins) {
        m = coins.size();
        n = coins[0].size();

        dp = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(3, INT_MIN)));

        return solve(coins, 0, 0, 2);
    }
};