    int numberOfSteps(int num) {
        // Recursion
        // if(num==0) return 0;
        // if(num==1) return 1;
        // if(num%2==0) return 1+numberOfSteps(num/2);
        // return 1+numberOfSteps(num-1);

        if(num<=1) return num;
        int steps=0;
        while(num>1){
            if(num%2) steps+=2;
            else steps+=1;
            num/=2;
        }
        return steps+1;
    }
