    int matrixSum(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();++i){
            sort(nums[i].begin(),nums[i].end());
        }
        int score=0;
        for(int j=0;j<nums[0].size();++j){
            int m=nums[0][j];
            for(int i=1;i<nums.size();i++){
                if(m < nums[i][j]) m = nums[i][j];
            }
            score += m;
        }
        return score;
    }
