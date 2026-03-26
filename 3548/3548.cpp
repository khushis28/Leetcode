class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        long long total = 0;

        vector<int> freq(100001, 0); //since grid[i][j] ≤ 1e5

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];
                freq[grid[i][j]]++;
            }
        }

        //horizontal cuts
        long long topSum = 0;
        vector<int> topFreq(100001, 0);

        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                topSum += val;
                topFreq[val]++;
                freq[val]--;
            }

            long long bottomSum = total - topSum;

            if (topSum == bottomSum) return true;

            long long diff = abs(topSum - bottomSum);

            if (topSum > bottomSum) {
                if (valid(topFreq, grid, 0, i, 0, n - 1, diff))
                    return true;
            } else {
                if (valid(freq, grid, i + 1, m - 1, 0, n - 1, diff))
                    return true;
            }
        }

        fill(freq.begin(), freq.end(), 0);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                freq[grid[i][j]]++;

        //Vertical cuts
        long long leftSum = 0;
        vector<int> leftFreq(100001, 0);

        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) {
                int val = grid[i][j];
                leftSum += val;
                leftFreq[val]++;
                freq[val]--;
            }

            long long rightSum = total - leftSum;

            if (leftSum == rightSum) return true;

            long long diff = abs(leftSum - rightSum);

            if (leftSum > rightSum) {
                if (valid(leftFreq, grid, 0, m - 1, 0, j, diff))
                    return true;
            } else {
                if (valid(freq, grid, 0, m - 1, j + 1, n - 1, diff))
                    return true;
            }
        }

        return false;
    }

    bool valid(vector<int>& freq,
               vector<vector<int>>& grid,
               int r1, int r2, int c1, int c2,
               long long diff) {

        if (diff > 100000 || freq[diff] == 0) return false;

        int rows = r2 - r1 + 1;
        int cols = c2 - c1 + 1;

        if (rows > 1 && cols > 1) return true;

        //single row
        if (rows == 1) {
            if (grid[r1][c1] == diff) return true;
            if (grid[r1][c2] == diff) return true;
        }

        //single column
        if (cols == 1) {
            if (grid[r1][c1] == diff) return true;
            if (grid[r2][c1] == diff) return true;
        }

        return false;
    }
};