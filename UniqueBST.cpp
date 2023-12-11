int numTrees(int n) {
    if(n==1) return 1;
    vector<int> v(n+1,0);
    v[0]= v[1] =1;
    for(int k=2;k<=n;++k){
        for(int i=1;i<=k;++i){
            v[k] += v[i-1]*v[k-i];
        }
    }
    return v[n];
}
