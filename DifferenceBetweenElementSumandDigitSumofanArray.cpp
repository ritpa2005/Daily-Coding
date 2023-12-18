    int differenceOfSum(vector<int>& nums) {
        int d=0,s=0;
        for(int i=0;i<nums.size();i++){
            s+= nums[i];
            while(nums[i]>0){
                d+= nums[i]%10;
                nums[i]/=10;
            }
        }
        return s-d;
    }
