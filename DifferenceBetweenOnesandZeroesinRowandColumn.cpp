  vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        unordered_map<int,int> mr1,mc1;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                if(grid[i][j]==1){
                    mr1[i]++;
                    mc1[j]++;
                }
            }
        }
        vector<vector<int>> vv(grid.size(),vector<int>(grid[0].size()));
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                vv[i][j] = (2*mc1[j]+ 2*mr1[i]- grid.size()-grid[0].size());
            }
        }
        return vv;
    }
