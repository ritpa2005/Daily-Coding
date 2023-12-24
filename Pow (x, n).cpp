    double myPow(double x, int n) {
        if(n==1) return x;
        if(n==0) return 1;
        if(n==-1) return 1/x;
        if(x==1 || x==0) return x;
        if(x==-1) return n%2 ? -1:1;
        double temp = myPow(x,n/2);
        if(n%2){
            if(n>0) return x*temp*temp;
            else return (1/x)*temp*temp;
        }
        else return temp*temp;
    }
