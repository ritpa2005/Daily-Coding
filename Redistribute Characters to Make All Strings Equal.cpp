    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int> m;
        for(auto s:words){
            for(char c:s){
                m[c]++;
            }
        }
        for(auto x:m){
            if((x.second)%n!=0) return false;
        }
        return true;
    }
