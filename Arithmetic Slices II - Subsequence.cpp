    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0, n=nums.size();
        vector<unordered_map<long long, int>> dp(n);
        for(int i=0;i<n;++i){
            for(int j=0;j<i;++j){
                long long d = (long long)nums[i] - nums[j];
                if(dp[j].find(d)!=dp[j].end()){
                    dp[i][d] += dp[j][d]+1;
                    ans += dp[j][d];
                }
                else{
                    dp[i][d]+=1;
                }
            }
        }
        return ans;
    }
