    int tonum(string s){
        int sign=1,num=0, i=0;
        if(s[0]=='-'){
            i++;
            sign=-1;
        }
        for(;s[i]!='\0';i++){
            num = num*10 + (int)(s[i]-'0');
        }
        return sign*num;
    }
    string complexNumberMultiply(string num1, string num2) {
        string val;
        int real1,img1;
        for(int i=0;i<num1.length();i++){
            if(num1[i]=='+'){
                real1=tonum(val);
                val="";
                continue;
            }
            if(num1[i]=='i'){
                img1=tonum(val);
                val="";
                continue;
            }
            val+=num1[i];
        }
        int real2,img2;
        for(int i=0;i<num2.length();i++){
            if(num2[i]=='+'){
                real2=tonum(val);
                val="";
                continue;
            }
            if(num2[i]=='i'){
                img2=tonum(val);
                val="";
                continue;
            }
            val+=num2[i];
        }
        int real3 = real1*real2 - img1*img2;
        int img3 = real1*img2 + real2*img1;
        val = to_string(real3) + '+' + to_string(img3) + 'i';
        return val;
