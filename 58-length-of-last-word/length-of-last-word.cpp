class Solution {
public:
    int lengthOfLastWord(string s) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int len = 0,finalans=0;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]==' ')
            len = 0;
            else
            len++,finalans = len;
        }
        return finalans;
    }
};