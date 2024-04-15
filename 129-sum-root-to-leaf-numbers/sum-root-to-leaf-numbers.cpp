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
    
    int func(TreeNode* root,int cur)
    {
        if(root == NULL)
        return 0 ;

        cur = cur * 10 + root->val;

        if(root->left == NULL && root->right == NULL)
        return cur;

        int l = func(root->left,cur);
        int r = func(root->right,cur);

        return l + r;
    }

    int sumNumbers(TreeNode* root) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        return func(root,0);
    }
};