    void helper(TreeNode* root, vector<int>&v){
        if(root==NULL) return;
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            return;
        }
        helper(root->right, v);
        helper(root->left, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        helper(root1, v1);
        helper(root2, v2);
        return v1==v2;
    }
