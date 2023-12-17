int ninjaCandidate(vector<int> &arr) {
	sort(arr.begin(),arr.end());
	int n = arr.size();
	if(abs(arr[0]) >arr[n-1]) return arr[0]*arr[1]*arr[n-1];
	else if(arr[0]+arr[n-1] == 0){
		if(abs(arr[1])>arr[n-2]) return arr[0]*arr[1]*arr[n-1];
		else return arr[n-1]*arr[n-2]*arr[n-3];
	}
	return arr[n-1]*arr[n-2]*arr[n-3];
}
