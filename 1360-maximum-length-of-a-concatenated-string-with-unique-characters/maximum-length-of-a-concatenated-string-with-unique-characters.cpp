class Solution {
public:
    int n;
    bool hasCommon(string &s1, string& s2) {
        int arr[26] = {0};
        
        for(char &ch : s1) {
            if(arr[ch-'a'] > 0)
                return true;
            arr[ch-'a']++;
        }
        
        for(char &ch : s2) {
            if(arr[ch-'a'] > 0)
                return true;
        }
        
        return false;
    }

    int func(int idx, vector<string>& arr, string temp) {
        if(idx >= n)
            return temp.length();

        int exclude = 0;
        int include = 0;

        if(hasCommon(arr[idx],temp))
        exclude = func(idx+1,arr,temp);
        else
        {
            exclude = func(idx+1,arr,temp);
            temp+=arr[idx];
            include = func(idx+1,arr,temp);
        }
        return max(exclude,include);
    }

    int maxLength(vector<string>& arr) {
        string temp = "";
        n = arr.size();
        return func(0,arr,temp);
    }
};