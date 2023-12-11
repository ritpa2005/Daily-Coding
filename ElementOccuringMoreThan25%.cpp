int findSpecialInteger(vector<int>& arr) {
    if(arr.size()==1) return arr[0];
    int k=arr.size()/4,c=0;
    for(int i=1;i<arr.size()-k;i++){
        if(arr[i]==arr[i+k]){
             c = arr[i];
        }
    }
    return c;
}
