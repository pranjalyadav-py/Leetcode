class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        map<int,int> mp;

        int n = nums.size();
        int j =0;
        int ans = INT_MIN;

        for(int i =0;i<n;i++)
        {
            mp[nums[i]]++;

            if(mp[nums[i]]>k)
            {
                while(mp[nums[i]]>k && j<=i)
                {
                    mp[nums[j]]--;
                    j++;
                }
            }

            ans = max(ans,(i-j)+1);

        }

        return ans;
    }
};