class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        unordered_map<char, int> m;

        for(char &c : t) m[c]++;

        int r = t.length(), i = 0, j = 0, sIdx = 0, len = INT_MAX;

        while(j < n) {
            char c_j = s[j];
            if(m[c_j] > 0) r--;
            m[c_j]--;

            while(r == 0) {
                if(len > j - i + 1) {
                    len = j - i + 1;
                    sIdx = i;
                }

                char c_i = s[i];
                m[c_i]++;
                if(m[c_i] > 0) r++;

                i++;
            }

            j++;
        }

        return len == INT_MAX ? "" : s.substr(sIdx, len);
    }
};
