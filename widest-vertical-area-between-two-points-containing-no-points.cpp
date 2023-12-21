int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int w=0;
        sort(points.begin(),points.end());
        int m = points[0][0];
        for(int i=1;i<points.size();i++){
            if(points[i][0]-m >w){
                w = points[i][0]-m;
            }
            m= points[i][0];
        }
        return w;
    }
