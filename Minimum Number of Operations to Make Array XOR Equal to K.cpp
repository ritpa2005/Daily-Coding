    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        long long x=0;
        for(int i=0;i<n;i++){
            x = x^nums[i];
        }
        int ans=0;
        x = x^k;
        while(x>0){
            if(x&1) ans++;
            x = x>>1;
        }
        return ans;
    }
