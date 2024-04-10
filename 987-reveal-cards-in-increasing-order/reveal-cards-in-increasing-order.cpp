class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        sort(deck.begin(),deck.end());
        int n = deck.size();
        queue<int> q;
        for(int i =0;i<n;i++)
        {
            q.push(i);
        }

        vector<int> ans(n);

        for(int i =0;i<n;i++)
        {

            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }

        return ans;
    }
};