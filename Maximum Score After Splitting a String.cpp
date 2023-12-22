    int maxScore(string s) {
        int n = s.length();
        int s1=0;
        for(int i=n-1;i>0;i--){
            if(s[i]=='1') s1++;
        }
        int s0 = 0,ms=0;
        
        for(int i=0;i<n-1;i++){
            if(s[i]=='0') s0++;
            if(s0+s1 > ms) ms = s1+s0;
            if(s[i+1]=='1') s1--;
        }
        return ms;
    }
