class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool z = 0;
        int cnt=1;
        int j =0;
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1] && !z)
            {
                cnt++;
                z=1;
                j++;
            }
            else if(nums[i]!=nums[i-1])
            {
                cnt++;
                z=0;
                j++;
            }
            nums[j] = nums[i];
        }
        return cnt;
    }
};