vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	if(n<k) return arr;
	sort(arr.begin(),arr.end());
	set<int> s;
	for(int i=0;i<= (k-1)*n/k + n%k; i++){
		if(arr[i]==arr[i + n/k -1]) s.insert(arr[i]);
	}

	vector<int> v(s.begin(),s.end());
	return v;
}
