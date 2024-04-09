class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int time = 0;

        for(int i = 0;i<tickets.size();i++)
        {
            if(i<=k)
            time+=min(tickets[i],tickets[k]);
            else
            time+=min(tickets[i],tickets[k]-1);
        }

        return time;
    }
};