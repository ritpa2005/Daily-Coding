    int minimumAddedCoins(vector<int>& coins, int target) {
        int c=0;
        int k=0;
        sort(coins.begin(),coins.end());
        for(int i : coins){
            while(i > k+1){
                k = 2*k + 1;
                c++;
            }
            if(k>=target) break;
            else{
                k += i;
            }
        }
        while(k<target){
            k = 2*k +1;
            c++;
        }
        return c;
    }
