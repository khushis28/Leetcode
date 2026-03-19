//POTD - Leetcode

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> sum(n, vector<int>(m, 0));
        vector<vector<int>> countX(n, vector<int>(m, 0));

        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                // Convert values
                int val = 0;
                if(grid[i][j] == 'X') val = 1;
                else if(grid[i][j] == 'Y') val = -1;

                int xVal = (grid[i][j] == 'X') ? 1 : 0;

                // Build prefix sum
                sum[i][j] = val;
                countX[i][j] = xVal;

                if(i > 0) {
                    sum[i][j] += sum[i-1][j];
                    countX[i][j] += countX[i-1][j];
                }

                if(j > 0) {
                    sum[i][j] += sum[i][j-1];
                    countX[i][j] += countX[i][j-1];
                }

                if(i > 0 && j > 0) {
                    sum[i][j] -= sum[i-1][j-1];
                    countX[i][j] -= countX[i-1][j-1];
                }

                // Check conditions
                if(sum[i][j] == 0 && countX[i][j] > 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};