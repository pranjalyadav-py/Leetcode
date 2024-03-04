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
                maxi=max(maxi,score); // lene ke bad jo bhi max ho wo ans
                i++;
                // phle lelo
            }
            else if(score>0)
            {
                score--;
                power+=tokens[j];
                j--;
                // phir kharch kardo
            }
            else
            {
                break;
                // if na le pao na kharch toh break kar do
            }
        }

        return maxi;
    }
};