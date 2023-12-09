string tree2str(TreeNode* root) {
    if(root==NULL) return "";
    string s = to_string(root->val);
    if(root->left || root->right) s += ("(" + tree2str(root->left) + ")");
    if(root->right) s += ("(" + tree2str(root->right) + ")");
    return s;
}
