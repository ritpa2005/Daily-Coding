    int minOperations(string s) {
        int o1=0, e1=0, o0=0, e0=0;
        for(int i=0;i<s.length();i++){
            if(i%2){
                if(s[i]=='1') o1++;
                else o0++;
            }
            else{
                if(s[i]=='0') e0++;
                else e1++;
            }
        }
        return min(o1+e0, o0+e1);
    }
