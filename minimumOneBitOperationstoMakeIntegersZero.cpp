    int minimumOneBitOperations(int n) {
        int c=0;
        while(n>0){
            c = c^n;
            n = n>>1;
        }
        return c;
    }
