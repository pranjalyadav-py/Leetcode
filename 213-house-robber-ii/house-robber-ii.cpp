class Solution {
public:

    int f(vector<int>& nums){ 

        int n = nums.size();

        int ft[n];
        ft[0]=0;
        ft[1] = nums[0];

        for(int i =2;i<n;i++)
        {
            ft[i] = max(nums[i-1]+ft[i-2],ft[i-1]);
        }  

        return ft[n-1];
    }

    int s(vector<int>& nums){

        int n = nums.size();

        int st[n];
        st[0]=0;
        st[1] = nums[1];

        for(int i =2;i<n;i++)
        {
            st[i] = max(nums[i]+st[i-2],st[i-1]);
        } 

        return st[n-1];
    }

    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];

        return max(f(nums),s(nums)) ;
    }
};