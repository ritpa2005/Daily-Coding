    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n1 = g.size(), n2 = s.size();
        int c=0;
        for(int i=0, j=0; i<n1&&j<n2; j++){
            if(s[j]>=g[i]){
                c++;
                i++;
            }
        }
        return c;
    }
