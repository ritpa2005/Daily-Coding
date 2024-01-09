    int minimumOperationsToMakeEqual(int x, int y) {
        if(x<=y) return y-x;
        int ans=0;
        queue<int> q;
        map<int,int> m;
        q.push(x);
        while(!q.empty()){
            int nq = q.size();
            for(int i=0;i<nq;i++){
                int k = q.front();
                q.pop();
                
                if(k>10000 || k<0) continue;
                if(k==y) return ans;
                
                if(k%11==0 && m[k/11]==0){
                    m[k/11]++;
                    q.push(k/11);
                }
                if(k%5==0 && m[k/5]==0){
                    m[k/5]++;
                    q.push(k/5);
                }
                if(k>0 && m[k-1]==0){
                    m[k-1]++;
                    q.push(k-1);
                }
                if(m[k+1]==0){
                    m[k+1]++;
                    q.push(k+1);
                }
            }
            ans++;
        }
        return ans;
    }
