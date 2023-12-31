    int minimumNumbers(int num, int k) {
        vector<vector<int>> vv = {{1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                                    {10,1,2,3,4,5,6,7,8,9},
                                    {5,-1,1,-1,2,-1,3,-1,4,-1},
                                    {10,7,4,1,8,5,2,9,6,3},
                                    {5,-1,3,-1,1,-1,4,-1,2,-1},
                                    {2,-1,-1,-1,-1,1,-1,-1,-1,-1},
                                    {5,-1,2,-1,4,-1,1,-1,3,-1},
                                    {10,3,6,9,2,5,8,1,4,7},
                                    {5,-1,4,-1,3,-1,2,-1,1,-1},
                                    {10,9,8,7,6,5,4,3,2,1}
        };

        if(num==0) return 0;
        int x = num%10;
        if(vv[k][x]==-1) return -1;
        else{
            if(num < k*vv[k][x]) return -1;
            else return vv[k][x];
        }
    }
