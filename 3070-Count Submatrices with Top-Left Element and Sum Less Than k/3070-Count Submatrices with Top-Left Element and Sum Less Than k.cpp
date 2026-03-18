//POTD - Leetcode

class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        int count = 0;
        
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
            
                if(i > 0) grid[i][j] += grid[i-1][j];
                
                if(j > 0) grid[i][j] += grid[i][j-1];
                
                if(i > 0 && j > 0) grid[i][j] -= grid[i-1][j-1];
            
                if(grid[i][j] <= k) count++;
            }
        }
        
        return count;
    }
};