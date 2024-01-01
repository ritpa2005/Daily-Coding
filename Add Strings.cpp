    string addStrings(string num1, string num2) {
        int n1=num1.length(), n2=num2.length();
        if(n2>n1) return addStrings(num2,num1);

        string ans(n1,'0');
        int s=0, c=0, i=n1-1;
        for(int j=n2-1;j>=0;--j){
            s = (int)(num2[j])-48 + (int)(num1[i])-48 + c;
            c=s/10;
            ans[i] = (char)(s%10 + 48);
            i--;
        }
        while(i>=0){
            s = (int)(num1[i])-48 + c;
            c=s/10;
            ans[i] = (char)(s%10 + 48);
            i--;
        }
        if(c) ans = (char)(c+48) + ans;
        
        return ans;
    }
