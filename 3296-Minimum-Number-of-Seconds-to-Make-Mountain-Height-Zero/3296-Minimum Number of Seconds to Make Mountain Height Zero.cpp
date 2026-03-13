class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        priority_queue<
            tuple<long long,long long,long long>,
            vector<tuple<long long,long long,long long>>,
            greater<>
        > pq;

        for(long long t : workerTimes){
            pq.push({t, t, 1});
        }

        long long ans = 0;

        while(mountainHeight--){
            auto [time, base, k] = pq.top();
            pq.pop();

            ans = max(ans, time);

            k++;
            pq.push({time + base * k, base, k});
        }

        return ans;
    }
};