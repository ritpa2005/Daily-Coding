    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(boxes[j]=='1') v[i] += abs(j-i);
            }
        }
        return v;
    }
