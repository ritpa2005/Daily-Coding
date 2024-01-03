int lengthOfLastWord(string s) {
    int ans=0, n=s.size(), i;
        for(i=n-1;i>=0;i--){
            if(s[i]!=' ') break;
        }
        for(;i>=0;i--){
            if(s[i]==' ') break;
            else ans++;
        }
        return ans;
    }
