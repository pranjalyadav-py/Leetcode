class Solution {
public:
    string minRemoveToMakeValid(string s) {

       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
       stack<int> st;
       string ans = "";

       for(int i = 0;i<s.length();i++)
       {
        if(s[i]=='(')
        st.push(i);
        else if(s[i]==')' && !st.empty())
        {
            s[st.top()]='O';
            s[i]='C';
            st.pop();
        }
       }

       for(int i =0;i<s.length();i++)
       {
        if(s[i]>='a' && s[i]<='z')
        ans+=s[i];
        else if(s[i]=='C')
        ans+=')';
        else if(s[i]=='O')
        ans+='(';
       }

       return ans;
    }
};