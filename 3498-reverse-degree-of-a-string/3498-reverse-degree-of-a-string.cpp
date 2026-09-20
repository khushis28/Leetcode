class Solution {
public:
    int reverseDegree(string s) {
        int total_deg = 0;

        for(int i = 0; i<s.length(); i++){
            int reverse_pos = 'z' - s[i] + 1;     // 'a' -> 26, 'z' -> 1
            int string_pos = i+1;     //1-indexed position
            total_deg += reverse_pos * string_pos;
        }
        return total_deg;
    }
};