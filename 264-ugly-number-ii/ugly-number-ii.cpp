class Solution {
public:

    int nthUglyNumber(int n) {

        priority_queue <long long, vector<long long>, greater<long long>> pq;
        pq.push(1);
        map<long long,int> mp;
        mp[1]++;

        int ans = 1;

        while(n--){
        long long i = pq.top()*2;
        long long j = pq.top()*3;
        long long k = pq.top()*5;

        if(!mp[i])
        pq.push(i),mp[i]++;
        if(!mp[j])
        pq.push(j),mp[j]++;
        if(!mp[k])
        pq.push(k),mp[k]++;;

        ans = pq.top();
        pq.pop();
        }
        return ans;
    }
    
};