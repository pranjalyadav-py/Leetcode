class Solution {
public:
    int n;
    int dp[505];
    int rec(int i,int k,vector<int>& arr) {
        if(i>=n)
        return 0;

        if(dp[i]!=-1)
        return dp[i];

        int ans = 0, mx = 0;

        for(int j = i;j<=i+k-1 && j<n;j++)
        {
            int times = (j-i) +1;
            mx = max(mx,arr[j]);
            //cout<<times<<" "<<mx<<"\n";
            ans = max(ans,(times * mx)+rec(j+1,k,arr));
        }

        return dp[i] = ans;
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        n= arr.size();
        memset(dp,-1,sizeof(dp));
        return rec(0,k,arr);
    }
};