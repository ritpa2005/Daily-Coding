    int findMinimumOperations(string s1, string s2, string s3) {
        int n1 = s1.length(), n2 = s2.size(), n3 = s3.size();
        int k=0;
        int n = min(min(n1,n2),n3);
        while(k<n){
            if(s1[k]==s2[k] && s1[k]==s3[k]){
                k++;
            }
            else break;
        }
        if(k<1) return -1;
        else return n1+n2+n3-k-k-k;
    }
