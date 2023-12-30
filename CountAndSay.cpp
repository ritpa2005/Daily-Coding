    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s = countAndSay(n-1);
        string ss;
        int l=s.length();
        int c=1;
        // if(s[0]==s[1]) c=1;
        // else{
        //     c=0;
        //     ss += (to_string(1) + s[0]);
        // }
        for(int i=0;i<l-1;++i){
            if(s[i]==s[i+1]) c++;
            else{
                ss += (to_string(c) + s[i]);
                c=1;
            }
        }
        if(s[l-1]==s[l-2]) ss += (to_string(c) + s[l-1]);
        else ss += (to_string(1) + s[l-1]);
        return ss;
    }
