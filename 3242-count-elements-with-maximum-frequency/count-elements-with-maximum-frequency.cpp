class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

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