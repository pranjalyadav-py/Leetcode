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
    
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL || q == NULL)
        {
            if(p==NULL && q == NULL)
            return 1;
            else
            return 0;  
        }
    
        bool z = isSameTree(p->right,q->right);
        bool y = isSameTree(p->left,q->left);

        return (p->val==q->val) && z && y;
    }
};