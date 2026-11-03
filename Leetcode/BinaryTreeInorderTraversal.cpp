//https://leetcode.com/problems/binary-tree-inorder-traversal/description/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        dfs(root, ans);

        return ans;
    }

    void dfs(TreeNode* root, vector<int>& ans){
        if(!root)
            return;
        
        dfs(root->left, ans);
        ans.push_back(root->val);
        dfs(root->right, ans);
    }
};
