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
    int bbt(TreeNode* root)
    {
        if(root == NULL)
        return 0;

        int l = bbt(root->left);
        int r = bbt(root->right);

    
        if(abs(l-r)>1)
        return -1000000;

        return 1 + max(l,r);
    }

    bool isBalanced(TreeNode* root) {

        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);

        int ans = bbt(root);

        if(ans<0)
        return false;
        else
        return true;
    }
};