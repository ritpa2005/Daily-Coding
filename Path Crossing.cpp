    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        s.insert({0,0});
        int i=0,j=0;
        for(char x : path){
            if(x=='N'){
                j++;
                s.insert({i,j});
            }
            else if(x=='E'){
                i++;
                s.insert({i,j});
            }
            else if(x=='W'){
                i--;
                s.insert({i,j});
            }
            else{
                j--;
                s.insert({i,j});
            }
        }
        return path.size() != s.size()-1;
    }
