int numSpecial(vector<vector<int>>& mat) {
    map<pair<int,int>,int> m;
    for(int i=0;i<mat.size();++i){
        for(int j=0;j<mat[i].size();++j){
            if(mat[i][j]==1){
                int temp=0;
                for(auto it:m){
                    if(it.first.first==i || it.first.second==j){
                        temp=2;
                        m[{i,j}]=2;
                        m[it.first]=2;
                    }
                }
                if(temp==0) m[{i,j}]++;
            }
        }
    }
    int ans=0;
    for(auto it:m){
        if(it.second==1) ans++;
    }
    return ans;
}
