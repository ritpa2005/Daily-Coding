    int numberOfBeams(vector<string>& bank) {
        int ans=0,prev=0;
        for(int i=0;i<bank.size();++i){
            int sum=0;
            for(int j=0;j<bank[i].size();++j){
                if(bank[i][j]=='1') sum++;
            }
            if(sum!=0){
                ans += sum*prev;
                prev=sum;
            }
        }
        return ans;
    }
