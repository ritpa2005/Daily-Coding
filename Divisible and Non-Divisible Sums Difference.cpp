    int differenceOfSums(int n, int m) {
        int x = n/m;
        return n*(n+1)/2 - 2*m*x*(x+1)/2;
    }
