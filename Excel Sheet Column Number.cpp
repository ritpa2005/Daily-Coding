    int titleToNumber(string ct) {
        int n = ct.size();
        int ans =0;
        for(int i=0;i<n;i++){
            ans = ans*26 + (ct[i]-64);
        }
        return ans;
    }
