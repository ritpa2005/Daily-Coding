    int minCost(string colors, vector<int>& nt) {
        int ans=0;
        int n = colors.length();
        int m=nt[0], sum = nt[0];
        for(int i=1;i<n;++i){
            if(colors[i]==colors[i-1]){
                sum += nt[i];
                m = max(m, nt[i]);
            }
            else{
                ans += (sum-m);
                sum=nt[i];
                m=nt[i];
            }
        }
        ans += (sum-m);
        return ans;
    }
