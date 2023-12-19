    int divide(int dividend, int divisor) {
        int temp=0;
        if(dividend<0 && divisor>0 || dividend>0 && divisor<0) temp=1;
        long int q=0,d1,d2;
        d1 = abs(dividend);
        d2 = abs(divisor);
        if(d2==1) q=d1;
        else{
            while(d1>=d2){
                d1-=d2;
                q++;
            }
        }
        if(temp==0){
            if(q>INT_MAX) return INT_MAX;
            return q;
        }
        else{
            return q*(-1);
        }
    }
