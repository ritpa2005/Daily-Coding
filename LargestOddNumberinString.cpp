string largestOddNumber(string num) {
    int i = num.length()-1;
    while(num[i]%2==0){
        i--;
        if(i<0) return "";
    }
    return num.substr(0,i+1);
} 
