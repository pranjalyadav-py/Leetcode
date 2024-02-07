class Solution {
   
public:
    string frequencySort(string s) {
       map<char,int> mp;

       for(int i =0;i<s.size();i++)
       mp[s[i]]++;

       vector<pair<int,char>> vp;

       for(auto i : mp)
       {
           vp.push_back({i.second,i.first});
       }

       sort(vp.begin(),vp.end());
       reverse(vp.begin(),vp.end());
       string ans = "";

       for(int i =0;i<vp.size();i++)
       {
           int j = vp[i].first;
           while(j--)
           ans+=vp[i].second;
       }

       return ans;
    }
    
};