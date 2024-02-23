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
    
    int count  = 0;
    void runsum(TreeNode* root, int targetSum,long long cursum,int& count)
    {
        if(root == nullptr)
        return;

        cursum+=root->val;
        if(cursum==targetSum)
        count++;

        runsum(root->left,targetSum,cursum,count);
        runsum(root->right,targetSum,cursum,count);
    }

    int pathSum(TreeNode* root, int targetSum) {
        
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
       if(root == nullptr)
       return count;

       runsum(root,targetSum,0,count);
       pathSum(root->left,targetSum);
       pathSum(root->right,targetSum);

       return count; 
    }
};
