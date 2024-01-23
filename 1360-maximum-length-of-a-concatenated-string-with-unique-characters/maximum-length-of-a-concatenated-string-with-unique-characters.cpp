class Solution {
public:
    int n;
    bool dup(string &s1,string &s2){
        int drr[26] = {0};
        for(char &ch:s1)
        {
            if(drr[ch-'a']>0)
            return true;

            drr[ch-'a']++;
        }

        for(char &ch:s2)
        {
            if(drr[ch-'a'])
            return true;
        }

        return false;
    }

    int func(string temp,int idx,vector<string>& arr){
       
        if(idx>=n)
        return temp.length();

        int exclude = 0;
        int include = 0;

        if(dup(arr[idx],temp))
        exclude = func(temp,idx+1,arr);
        else
        {
            exclude = func(temp,idx+1,arr);
            temp+=arr[idx];
            include = func(temp,idx+1,arr);
        }

        return max(exclude,include);
    }

    int maxLength(vector<string>& arr) {
        n = arr.size();
        return func("",0,arr);
    }
};