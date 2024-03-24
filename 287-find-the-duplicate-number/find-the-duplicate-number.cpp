class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int n = nums.size();
        int ans = -1;

        int i =0;
        while(i<n){
            if(nums[i]<0)
            {
                i++;
                continue;
            }
            else 
            {
            int temp = nums[i];
            if(nums[nums[i]-1]<0)
            {
                ans = nums[i];
                break;
            }
            else
            {
                swap(nums[i],nums[nums[i]-1]);
                nums[temp-1] = -1;
            }
            }

        }

        return ans;
    }
};