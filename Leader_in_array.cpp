class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        vector<int>V;
        /*
        vector<int>V;
        int i,j;
        int max=-1;
        for(i=0;i<n;i++){
            max=a[i]
            for(j=i+1;j<n;j++){
                if(max<a[j]){
                  V.push_back(max); 
                }
            }
        }
        */
        
        int max=-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                V.push_back(max);
            }
        }
        reverse(V.begin(),V.end());
        return V;
    }
};