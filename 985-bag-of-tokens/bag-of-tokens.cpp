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

        if(power>=tokens[0])
        {
            power = power - tokens[0];
            score++;
            i++;
        }

        while((score>0 || power>=tokens[i]) && i<=j)
        {
            if(power<tokens[i])
            {
                score--;
                power+=tokens[j];
                j--;
            }
            
            if(power>=tokens[i])
            {
                score++;
                power-=tokens[i];
                i++;
            }
        }
        return score;
    }
};