class Solution {
public:
    int n;
    long long arr[100001][2];

    long long func(int idx,int flag,vector<int>& nums)
    {

        if(idx>=n)
        return 0;

        if(arr[idx][flag]!=-1)
        return arr[idx][flag];

        long long skip = func(idx+1,flag,nums);

        long long val = nums[idx];
        if(!flag)
        {
            val = - val;
        }

        long long take =  func(idx+1,!flag,nums) + val;

        return arr[idx][flag] = max(skip,take);
    }

    long long maxAlternatingSum(vector<int>& nums) {

        n = nums.size();
        
        memset(arr,-1,sizeof(arr));
        return func(0,1,nums);
    }
};