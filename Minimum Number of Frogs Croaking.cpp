    int minNumberOfFrogs(string croak) {
        int n = croak.length();
        if(croak[0]!='c' || croak[n-1]!='k') return -1;
        int ans=0,temp=0;
        unordered_map<char,int> m;
        m['c']=0; m['k']=0; m['a']=0; m['o']=0; m['r']=0;
        unordered_map<char,char> mm;
        mm['c']='k'; mm['k']='a'; mm['a']='o'; mm['o']='r'; mm['r']='c';
        for(int i=0;i<n;i++){
            if(croak[i]=='c'){
                temp++;
                ans = max(ans,temp);
                m[croak[i]]++;
            }
            else if(croak[i]=='k'){
                temp--;
                m[mm[croak[i]]]--;
            }
            else{
                m[croak[i]]++;
                m[mm[croak[i]]]--;
            }

            for(auto it:m){
                if(it.second <0) return -1;
            }
        }
        for(auto x:m){
            if(x.second!=0) return -1;
        }
        return ans;
    }
