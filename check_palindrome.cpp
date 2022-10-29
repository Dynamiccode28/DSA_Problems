class Solution {
public:
    bool isPalindrome(string s) {
        if(s==""||s.size()==1){
            return true;
        }
        string str="";
        for(auto i:s){
            if(isalnum(i)){
                str+=i;
            }
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j])
                return false;
            i++;
            j--;
        }
        return true;
        
    }
};