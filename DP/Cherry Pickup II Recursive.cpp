class Solution {
public:
    int n,m;
    int dp[75][75][75];
    int solve(vector<vector<int>>& grid,int row,int col1,int col2){

        if(row>=m)
        return 0; // no cherry

        if(dp[row][col1][col2]!=-1)
        return dp[row][col1][col2];

        int cherry = grid[row][col1]; // cherry lelo
        if(col1!=col2)
        cherry+=grid[row][col2];

        int ans =0;
        for(int i =-1;i<=1;i++)
        {
            for(int j =-1;j<=1;j++)
            {
                int newrow = row+1;
                int newcol1 = col1+i;
                int newcol2 = col2+j;
                // change karke lelo

                if(newcol1>=0 && newcol1<n && newcol2>=0 && newcol2<n)
                {  
                    ans = max(ans,solve(grid,newrow,newcol1,newcol2));
                }
            }
        }

        // jo liya or jo rec me se max aya bhej do
        return dp[row][col1][col2] = cherry + ans;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(dp,-1,sizeof(dp));

        return solve(grid,0,0,n-1);
    }
};
