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

    int dfs(TreeNode* root,int &ans)
    {
        if(root == NULL)
        return 0;

        // 0 for ignoring the branch when ans is negative from it
        int l = max(0,dfs(root->left,ans));
        int r = max(0,dfs(root->right,ans));

        // prev ans and ans from present node
        ans = max(ans,l + r + root->val);

        //return l + r + root->val;  wrong dude its only from 1 branch
        return root->val + max(l,r);
    }

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        dfs(root,ans);
        return ans;
    }
};