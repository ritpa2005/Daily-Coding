    vector<int> helper(TreeNode* root, int &max_sum){
        if(root==NULL){
            return {0, INT_MAX, INT_MIN, 1};
        }

        vector<int> left = helper(root->left, max_sum);
        vector<int> right = helper(root->right, max_sum);

        if(left[3] && right[3] && root->val > left[2] && root->val < right[1]){
            int sum = left[0] + right[0] + root->val;
            max_sum = max(sum, max_sum);
            int minn = min(root->val, left[1]);
            int maxx = max(root->val, right[2]);
            return {sum, minn, maxx, 1};
        }
        return {0,0,0,0};
    }
    int maxSumBST(TreeNode* root) {
        int ans = 0;
        vector<int> v = helper(root, ans);
        return ans;
    }
