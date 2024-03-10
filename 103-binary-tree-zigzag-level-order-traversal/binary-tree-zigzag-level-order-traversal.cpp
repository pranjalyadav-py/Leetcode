/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root==NULL)
        return ans;

        queue<TreeNode*> q;
        q.push(root);

        int cnt = 0;

        while(!q.empty())
        {

            vector<int> vec;
            int s = q.size();
            for(int i =0;i<s;i++)
            {
                TreeNode* temp = q.front();
                vec.push_back(temp->val);
                q.pop();

                if(temp->left!=NULL)
                q.push(temp->left);

                if(temp->right!=NULL)
                q.push(temp->right);
            }

            if(cnt%2)
            {
                reverse(vec.begin(),vec.end());
            }

            ans.push_back(vec);
            cnt++;
        }

        return ans;
}
};