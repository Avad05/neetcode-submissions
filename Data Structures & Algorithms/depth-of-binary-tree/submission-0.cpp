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
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*, int>> stac;
        stac.push({root, 1});
        int res=0;
        while(!stac.empty()){
            pair<TreeNode*, int> current = stac.top();
            stac.pop();
            TreeNode* node = current.first;
            int depth = current.second;

            if(node!=nullptr){
                res = max(res, depth);
                stac.push({node->left, depth+1});
                stac.push({node->right, depth+1});

            }
        }
        return res;
    }
};
