class Solution{   
public:
    
    int getPairsCount(int arr[], int n, int k) {
        // code here
        //counting pairs with given sum
        unordered_map<int,int>ans;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(ans[k-arr[i]]>0){
                cnt+=ans[k-arr[i]];
            }
            ans[arr[i]]++;
        }
        return cnt;
    }
};
