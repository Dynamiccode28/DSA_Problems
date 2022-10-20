class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>ans;
        for(int i=0; i<n; i++){
              ans[a[i]]++;
              if(ans[a[i]]==k)
              return a[i];
        }
           
      return -1;
    }
};