class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int n = nums.size();
        int j =0;
        int number = 1,ans = 0;
        for(int i =0;i<n;i++)
        {
            number *= nums[i];
            while(number >= k && j<=i)
            {
                number = number/nums[j];
                j++;
            }
            ans += (i - j) + 1;
        }

        return ans;
    }
};