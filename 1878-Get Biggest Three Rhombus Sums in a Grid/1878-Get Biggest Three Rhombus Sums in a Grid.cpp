//POTD Leetcode

class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        set<int> sums; 
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                
                sums.insert(grid[i][j]);
                
                for(int k = 1; k < min(m, n); k++) {
                    
                    if(i - k < 0 || i + k >= m || 
                       j - k < 0 || j + k >= n) {
                        break;
                    }
                    
                    int sum = 0;
                    
                    for(int d = 0; d <= k; d++) {
            
                        sum += grid[i - k + d][j - d];         
                        sum += grid[i - d][j + k - d];
                        sum += grid[i + d][j - k + d];
                        sum += grid[i + k - d][j + d];
                    }
                    
                    sum -= grid[i - k][j];  
                    sum -= grid[i][j - k];  
                    sum -= grid[i + k][j];  
                    sum -= grid[i][j + k]; 
                    
                    sums.insert(sum);
                }
            }
        }
       
        vector<int> result;
        auto it = sums.rbegin(); 
        for(int count = 0; count < 3 && it != sums.rend(); count++, it++) {
            result.push_back(*it);
        }
        
        return result;
    }
};