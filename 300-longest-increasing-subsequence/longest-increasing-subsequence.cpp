class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n];

        for(int j=0;j<n;j++)
        dp[j] = 1;

        int ans = 0;
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            ans= max(ans,dp[i]);
        }
        return ans;

    }
};