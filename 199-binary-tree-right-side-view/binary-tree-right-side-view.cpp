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
    

    vector<int> rightSideView(TreeNode* root) {

    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    
    vector<int> vec;
    queue<TreeNode*> q;
    
    if (root != nullptr) {
        q.push(root);
        vec.push_back(root->val);
    }
    
    while (!q.empty()) {
        int sze = q.size();

        for (int i = 0; i < sze; i++) {
            TreeNode* T = q.front();
            q.pop();
            
            if (T->right != nullptr) {
                q.push(T->right);
            }
            
            if (T->left != nullptr) {
                q.push(T->left);
            }
        }

        if (!q.empty()) {
            vec.push_back(q.front()->val);
        }
    }

    return vec;
}
};