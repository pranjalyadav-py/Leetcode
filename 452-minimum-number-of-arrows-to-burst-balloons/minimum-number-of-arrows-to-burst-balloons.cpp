class Solution {

public:
    static bool sortbysec(const vector<int> &a,
              const vector<int> &b)
    {
        return (a[1] < b[1]);
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        sort(points.begin(),points.end(), sortbysec);
        long long lim = -2147483649;
        int ans = 0;
        for(int i =0;i<points.size();i++)
        {
            if(points[i][0]>lim)
            {
                lim = points[i][1];
                ans++;
            }
        }
        return ans;
    }
};