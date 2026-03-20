class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int rows = m - k + 1;
        int cols = n - k + 1;
        vector<vector<int>> ans(rows, vector<int>(cols));
    
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                ans[i][j] = findMinDiff(grid, i, j, k);
            }
        }
        
        return ans;
    }
    
private:
    int findMinDiff(vector<vector<int>>& grid, int startRow, int startCol, int k) {
        set<int> distinctValues; 
        for(int i = startRow; i < startRow + k; i++) {
            for(int j = startCol; j < startCol + k; j++) {
                distinctValues.insert(grid[i][j]);
            }
        }
        
        if(distinctValues.size() <= 1) {
            return 0;
        }
        
        vector<int> sorted(distinctValues.begin(), distinctValues.end());
        int minDiff = INT_MAX;
        for(int i = 0; i < sorted.size() - 1; i++) {
            minDiff = min(minDiff, sorted[i + 1] - sorted[i]);
        }
        
        return minDiff;
    }
};