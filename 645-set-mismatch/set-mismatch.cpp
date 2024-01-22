class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        int j =0,k =0;
        for(int i =0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==2)
            j = nums[i];
        }

        for(int i =1;i<=nums.size();i++)
        {
            if(mp[i]==0)
            {
                k=i;
                break;
            }
        }
        return {j,k};
    }
};