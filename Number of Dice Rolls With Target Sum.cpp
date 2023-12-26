    int numRollsToTarget(int n, int k, int target) {
        vector<int> vv(target+1);
        vv[0]=1;
        for(int i=0;i<n;i++){
            vector<int> v(target+1);
            for(int j=1;j<=k;++j){
                for(int h=j;h<=target;++h){
                    v[h] = (v[h] + vv[h-j])%1000000007;
                }
            }
            vv = v;
        }
        return vv[target];
    }
