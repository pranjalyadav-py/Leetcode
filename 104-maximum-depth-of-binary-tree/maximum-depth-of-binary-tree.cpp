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

int height(TreeNode* node)
{
    
    
    int level = 0;

    if(node == NULL)
    return level;

    queue<TreeNode*> q;
    q.push(node);

    while(!q.empty())
    {
        int s = q.size();

        for(int i =0;i<s;i++)
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp->right!=NULL)
            q.push(temp->right);

            if(temp->left!=NULL)
            q.push(temp->left);
        }

        level++;

        cout<<level<<"\n";
        cout<<q.size()<<"\n";
    }

    return level;
}

    int maxDepth(TreeNode* root) {

        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);
        return height(root);
    }
};
