class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec;
        for(int i =0;i<nums.size();i++)
        {
            if(lower_bound(vec.begin(),vec.end(),nums[i])==vec.end())
            {
                vec.push_back(nums[i]);
            }
            else
            vec[lower_bound(vec.begin(),vec.end(),nums[i]) - vec.begin()] = nums[i];
        }
        return vec.size();
    }
};