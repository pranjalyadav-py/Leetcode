class Solution {
public:
    int maxProfit(vector<int>& prices) {
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
        int ans =0;
        queue<int> q,t;

        bool z =0;
        for(int i =0;i<prices.size();i++)
        {
            if(q.empty() || q.back()<prices[i])
            {
                 q.push(prices[i]);
                 if(i == prices.size()-1)
                 z=1;
            }
            else
            {
                ans+=q.back() - q.front();
                q = t;
                q.push(prices[i]);
            }

        }

        if(z)
        ans+=q.back() - q.front();

        return ans;
    }
};