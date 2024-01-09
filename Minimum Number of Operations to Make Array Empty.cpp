    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1, ans=0;
        for(int i=1;i<nums.size();++i){
            if(nums[i]==nums[i-1]){
                c++;
            }
            else{
                if(c%3==0) ans+= (c/3);
                else if(c==1) return -1;
                else ans += (c/3 + 1);
                c=1;
            }
        }
        if(c%3==0) ans+= (c/3);
        else if(c==1) return -1;
        else ans += (c/3 + 1);
        return ans;
    }
