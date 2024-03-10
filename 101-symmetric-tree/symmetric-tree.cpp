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
    bool check(TreeNode* p,TreeNode* q)
    {
        if(p==NULL || q==NULL)
        return (p==NULL && q==NULL);

        return p->val == q->val && check(p->right,q->left) && check(p->left,q->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        bool ans = true;
        if(root)
        {
            ans = check(root->left,root->right);
        }
    return ans;
    }
};