int countCustomers(vector<int> &arr, int k)
{
    //    Write your code here
    int ans=0;
    map<int,int> m;
    set<int> s;
    for(int i=0;i<arr.size();i++){
        if(m.find(arr[i])!=m.end()) m.erase(arr[i]);
        else if(m.size()==k && s.find(arr[i])==s.end()){
            s.insert(arr[i]);
            ans++;
        }
        else if(s.find(arr[i])==s.end()) m[arr[i]]++;
    }
    return ans;
}
