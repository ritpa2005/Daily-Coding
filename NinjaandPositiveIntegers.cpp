vector<int> positiveIntegers(int n){
    if(n%3==0){
        return {n/3, n/3, n/3};
    }
    if(n%2){
        return {1, n/2, n/2};
    }
    if(n%4==0){
        return {n/4, n/4, n/2};
    }
    return {2, (n-2)/2, (n-2)/2};
}
