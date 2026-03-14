class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> ans;
       function<void(string)> dfs = [&](string curr){
          if(ans.size() >= k) return;
          if(curr.size() == n){
            ans.push_back(curr);
            return;
          }
          for(char ch : {'a','b','c'}){
            if(curr.empty()|| curr.back() != ch){
                dfs(curr + ch);
            }
          }
       };
       dfs("");
       if(ans.size() < k) return "";
       return ans[k-1];
    }
};