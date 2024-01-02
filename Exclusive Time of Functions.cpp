    int to_num(string s){
        int n=s.size();
        int num=0;
        for(int i=0;i<n;++i){
            num = num*10+ (int)(s[i])-48;
        }
        return num;
    }

    vector<string> split(string log){
        vector<string> v;
        string s;
        for(int i=0;i<log.size();++i){
            if(log[i]==':'){
                v.push_back(s);
                s="";
                continue;
            }
            s+= log[i];
        }v.push_back(s);

        return v;
    }

    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> vv(n,0);
        stack<int> st;
        int m = logs.size();
        int k=0;
        for(int i=0;i<m;++i){
            vector<string> v = split(logs[i]);
            int name = to_num(v[0]);
            int time = to_num(v[2]);
            if(v[1]=="start"){
                if(!st.empty()){
                    vv[st.top()] += (time - k);
                }
                st.push(name);
                k = time;
            }
            else{
                vv[st.top()] += time - k + 1;
                st.pop();
                k=time+1;
            }
        }
        return vv;
    }
