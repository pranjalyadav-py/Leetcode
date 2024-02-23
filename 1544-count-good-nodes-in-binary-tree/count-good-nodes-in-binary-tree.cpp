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

    void goodcnt(TreeNode* node, int& count,int maxcnt) //node's treenode* type
    {
        if(NULL == node) // not node->val == NULL but nullptr == node 
        return;

        if(maxcnt<=node->val)
        {
            count++;
            maxcnt = node->val;
        }
        goodcnt(node->left,count,maxcnt);
        goodcnt(node->right,count,maxcnt);
        node-> left = NULL;
        node-> right = NULL;

    }

    int goodNodes(TreeNode* root) {
        ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
        int count = 0; // answer
        if(root->val == NULL)
        return count;

        int maxcnt = root->val;
        goodcnt(root,count, maxcnt); // func call , max val till the calls in the stack, count passed by reference as have to return it at the end
        return count;
    }
};