    int maxDivScore(vector<int>& nums, vector<int>& divs) {
        int c=0, mc=0, ans=INT_MAX;
        for(int j=0;j<divs.size();++j){
            c=0;
            for(int i=0;i<nums.size();++i){
                if(nums[i]%divs[j]==0){
                    c++;
                }
            }
            if(c>mc){
                mc=c;
                ans=divs[j];
            }
            else if(c==mc){
                ans = min(ans, divs[j]);
            }
        }
        return ans;
    }
