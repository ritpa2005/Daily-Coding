    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        multiset<int> s;
        int i=0,j=0;
        auto it = s.begin(),itm = s.begin();
        for(auto val:nums1){
            s.insert(val);
            // it++;i++;
            // if(i== (m+n)/2){ j=i; itm =it;}
        }
        for(auto val:nums2){
            s.insert(val);
            // it++;i++;
            // if(i== (m+n)/2){ j=i; itm=it;}
        }
        double med;
        for (auto i=s.begin();i!=s.end();i++){
            if(j == (m+n)/2){
                itm = i;
                break;
            }
            else j++;
        }
        if((m+n)%2 == 0) med = (*itm + *(--itm))/2.0 ;
        else med = *(itm);
        return med;
    }
