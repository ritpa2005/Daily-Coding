    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int c=1;
        vector<vector<int>> vv;
        
        while(c){
            c=0;
            vector<int> v;
            for(auto it:m){
                if(it.second>0){
                    v.push_back(it.first);
                    m[it.first]--;
                    c++;
                }
            }
            if(v.size()>0) vv.push_back(v);
        }
        return vv;
    }
