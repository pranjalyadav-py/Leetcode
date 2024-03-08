class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp,np;
        for(auto i: nums)
        mp[i]++;

        for(auto i:mp)
        {
            np[i.second]++;
        }

        return np.rbegin()->first*np.rbegin()->second;
    }
};