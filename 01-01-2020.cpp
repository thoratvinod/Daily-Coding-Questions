/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<TreeNode*> ans;
    map <string, int> m;
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {

        collect(root);
        return ans;
    }
    
    string collect(TreeNode* root){
        
        if(!root)
            return "#";
        
         string s = to_string(root->val) + "," + collect(root->left) + "," + collect(root->right);
        m[s]++;
        if(m[s]==2)
            ans.push_back(root);
        
        return s;
    }
};