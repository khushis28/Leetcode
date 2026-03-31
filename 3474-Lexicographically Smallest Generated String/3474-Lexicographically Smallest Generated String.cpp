class Solution {
public:
    bool isSame(string &word, string &str2, int i, int m){
        for(int j = 0; j < m; j++){
            if(word[i] != str2[j]){
                return false;
            }
            i++;
        }
        return true;
    }

    string generateString(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();

        int N = n + m - 1;
        string word(N, '$');

        vector<bool> canChange(N, false);

        // Process 'T'
        for(int i = 0; i < n; i++){
            if(str1[i] == 'T'){
                int i_ = i;
                for(int j = 0; j < m; j++){
                    if(word[i_] != '$' && word[i_] != str2[j]){
                        return "";
                    }
                    word[i_] = str2[j];
                    i_++;
                }
            }
        }

        // Fill remaining with 'a'
        for(int i = 0; i < N; i++){
            if(word[i] == '$'){
                word[i] = 'a';
                canChange[i] = true;
            }
        }

        // Process 'F'
        for(int i = 0; i < n; i++){
            if(str1[i] == 'F'){
                if(isSame(word, str2, i, m)){
                    bool changed = false;

                    for(int k = i + m - 1; k >= i; k--){
                        if(canChange[k]){
                            word[k] = 'b';
                            changed = true;
                            break;
                        }
                    }

                    if(!changed){
                        return "";
                    }
                }
            }
        }

        return word;
    }
};