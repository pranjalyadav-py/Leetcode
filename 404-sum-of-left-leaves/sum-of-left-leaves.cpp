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
    
    int func(TreeNode* root, bool flag){
        if(root == NULL)
        return 0;

        int ans = 0;
        if(flag == 1 && root->left==NULL && root->right==NULL)
        ans = root->val;

        int i = func(root->left,1);
        int j = func(root->right,0);

        return ans + i + j;
    }

    int sumOfLeftLeaves(TreeNode* root) {

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

        if(root == NULL)
        return 0;

        return func(root,0);
    }
};