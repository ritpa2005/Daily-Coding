    int missingInteger(vector<int>& arr) {
        int sum = arr[0], i=1, n=arr.size();
        while(i<n && arr[i] == arr[i-1]+1){
            sum += arr[i];
            i++;
        }
        sort(arr.begin(), arr.end());
        
        int ans=sum;
        for(i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]) continue;
            if(arr[i]>sum && arr[i]==arr[i-1]+1){
                ans = arr[i-1]+1;
            }
            if(arr[i]>sum && arr[i]!= arr[i-1]+1){
                break;
            }
                            
        }
        if(ans!=sum) ans +=1;
        else if(ans==sum && find(arr.begin(),arr.end(),sum)!=arr.end()) ans++;
        
        return ans;
    }
