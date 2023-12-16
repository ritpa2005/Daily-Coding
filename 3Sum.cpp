    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> vv;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=0;i<n-2;++i){
            int j= i+1;
            int k= n-1;
            while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == 0){
                vv.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }
            else if(sum<0) j++;
            else k--;
            }   
        }
        vector<vector<int>> vvv;
        for(auto i : vv){
            vvv.push_back(i);
        }
        return vvv;
    }
