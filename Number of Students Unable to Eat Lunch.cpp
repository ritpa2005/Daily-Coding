    int countStudents(vector<int>& st, vector<int>& sd) {
        int c0=0,c1=0;
        int n = st.size();
        for(int i=0;i<n;i++){
            if(st[i]==1) c1++;
            else c0++;
        }
        for(int i=0;i<n;i++){
            if(sd[i]==1){
                if(c1>0) c1--;
                else return c0;
            }
            else{
                if(c0>0) c0--;
                else return c1;
            }
        }
        return 0;
    }
