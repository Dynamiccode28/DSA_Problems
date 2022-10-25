class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
        int i=n-1,j=m-1;
        int carry=0;
        vector<int>ans;
        string s="";
        while(i>=0 && j>=0){
            int sum=a[i]+b[j]+carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
            i--;
            j--;
        }
        while(i>=0){
            int sum = a[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
        }
        while(j>=0){
            int sum = b[j]+ carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
            j--;
        }
        
        while(carry){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }
        reverse(ans.begin(),ans.end());
        vector<int>::iterator it;
        it=ans.begin();
        if(ans[0]==0){ //if first element is 0 then discard it
            ans.erase(it);
        }
        for(auto i:ans){
            s+=to_string(i);
        }
        return s;
    }
};

