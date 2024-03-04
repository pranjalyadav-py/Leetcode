class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        if(tokens.size()==0)
        return 0;

        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int i =0,j =n-1;
        int score =0;

        int maxi =0;

        while(i<=j)
        {
            if(power>=tokens[i])
            {
                score++;
                power-=tokens[i];
                maxi=max(maxi,score);
                i++;
            }
            else if(score>0)
            {
                score--;
                power+=tokens[j];
                j--;
            }
            else
            {
                break;
            }

            cout<<score<<"\n";
        }

        return maxi;
    }
};