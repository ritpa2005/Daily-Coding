string reverseVowels(string s) {
        string vowel;
        for(int i=0;i<s.length();++i){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
                s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vowel += s[i];
                }
        }
        int j = vowel.length()-1;
        for(int i=0;i<s.length();++i){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
                s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    s[i]=vowel[j];
                    j--;
                    if(j== -1) break;
                }
        }
        return s;
    }
