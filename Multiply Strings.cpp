    string multiply(string num1, string num2) {
        if(num1.length()<num2.length()) return multiply(num2,num1);
        int n1 = num1.length();
        int n2 = num2.size();
        string ans(n1+n2,'0');
        
        for(int i=n2-1;i>=0;--i){
            int s=0,c=0;
            for(int j=n1-1;j>=0;j--){
                s = ((int)num2[i]-48) * ((int)num1[j]-48) + c;
                s += ((int)ans[j+i+1]-48);
                ans[j+i+1] = (char)(s%10 + 48);
                c = s/10;
            }
            if(c){
                ans[i] = (char)(c + 48);
            }
        }

        int k=0;
        while(k<(n1+n2) && ans[k]=='0'){
            k++;
        }
        if(k==n1+n2) return "0";
        return ans.substr(k);
    }
