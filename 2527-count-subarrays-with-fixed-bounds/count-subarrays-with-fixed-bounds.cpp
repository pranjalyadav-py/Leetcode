class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int minpos = -1;
        int maxpos = -1;
        int invalid = -1;
        long long ans = 0;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]<minK || nums[i]>maxK)
            {
                invalid = i;
            }

            if(nums[i] == minK)
            minpos = i;

            if(nums[i] == maxK)
            maxpos = i;

            
            if(min(minpos,maxpos) - invalid>0)
            ans += min(minpos,maxpos) - invalid;
        }
        return ans;
    }
};