    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n==1 && k%2!=0) return -1;
        if(n==2 && k==2) return nums[0];
        if(k==1) return nums[1];
        if(k==0) return nums[0];
        if(k>n){
            return *max_element(nums.begin(),nums.end());
        }
        else if(k==n){
            int m=nums[0];
            for(int i=1;i<k-1;++i){
                if(nums[i]>m) m=nums[i];
            }
            return m;
        }
        int m=nums[0];
        for(int i=0;i<k-1;++i){
            if(nums[i]>m) m=nums[i];
        }
        if(m< nums[k]) m = nums[k];
        return m;
    }
