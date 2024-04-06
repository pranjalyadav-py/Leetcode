class Solution {
public:
    string minRemoveToMakeValid(string s) {

       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
       map<int,int> mp;
       stack<int> st;
       string ans = "";

       for(int i = 0;i<s.length();i++)
       {
        if(s[i]=='(')
        st.push(i);
        else if(s[i]==')' && !st.empty())
        {
            mp[st.top()]++;
            mp[i]++;
            st.pop();
        }
       }

       for(int i =0;i<s.length();i++)
       {
        if(s[i]>='a' && s[i]<='z')
        ans+=s[i];
        else if(mp[i])
        ans+=s[i];
       }

       return ans;
    }
};