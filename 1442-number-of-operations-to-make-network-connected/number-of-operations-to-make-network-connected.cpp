class DisjointSet{
    public:
    vector<int> rank, parent,size;
    DisjointSet(int n) //Constructor
    {
        rank.resize(n + 1, 0);
        size.resize(n + 1);
        parent.resize(n + 1);

        for (int i = 0; i <= n;i++) // inintally everything was a single component
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node)
    {
        if(node == parent[node])
            return node;

        return parent[node] = findUPar(parent[node]); 
    }

    void unionByRank(int u,int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if(ulp_u==ulp_v) // if they are belonging to the same component
            return;
        
        if(rank[ulp_u]<rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            // larger still stays the larger;
        }
        else if(rank[ulp_v]<rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_u] = ulp_v;
            // now rank changes
            rank[ulp_u]++;
        }
        }

    void unionBySize(int u,int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if(ulp_u==ulp_v) // if they are belonging to the same component
            return;
        
        if(size[ulp_u]<size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            // larger still stays the larger;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
             parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet DB(n);
        int extra_edges=0;
        for(auto it: connections)
        {
            int u = it[0];
            int v = it[1];

            if(DB.findUPar(u)==DB.findUPar(v))
            {
                extra_edges++;
            }
            else
            {
                DB.unionBySize(u,v);
            }
        }
        int cc=0;
        for(int i =0;i<n;i++)
        {
            if(DB.parent[i]==i)
            {
                cc++;
            }
        }

        if(extra_edges<cc-1)
        return -1;
        else
        return cc-1;
    }

};