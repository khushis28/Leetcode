class Fancy {
public:
   const long long MOD = 1000000007;
   vector<long long>numbers;
   long long multiplyAll = 1;
   long long addAllVal = 0;

   Fancy() {  
   }
   long long inverse(long long x){
    long long result = 1;
    long long power = MOD-2;
    while(power){
        if(power%2)
        result = (result*x) % MOD;
        x = (x*x) % MOD;
        power/=2;
    }
    return result;
   }

    void append(int val) {
        long long newVal = (val- addAllVal + MOD) % MOD;
        newVal = (newVal* inverse(multiplyAll)) % MOD;
        numbers.push_back(newVal);
    }

    void addAll(int inc) {
        addAllVal = (addAllVal + inc) % MOD;
    }
    
    void multAll(int m) {
        multiplyAll = (multiplyAll*m) % MOD;
        addAllVal = (addAllVal*m) % MOD;
    }
    
    int getIndex(int idx) {
        if(idx>= numbers.size())
        return -1;
        long long ans = (numbers[idx]* multiplyAll + addAllVal) % MOD;
        return ans;
    }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */