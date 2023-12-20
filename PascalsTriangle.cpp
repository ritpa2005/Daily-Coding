vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> vv;
  vv.push_back({1});
  if(n==1) return vv;
  vv.push_back({1,1});
  if(n==2) return vv;
  for(int i=2;i<n;i++){
    vector<long long int> v(i+1,1);
    for(int j=1;j<i;j++){
      v[j]=vv[i-1][j-1] + vv[i-1][j];
    }
    vv.push_back(v);
    v.clear();
  }
  return vv;
}
