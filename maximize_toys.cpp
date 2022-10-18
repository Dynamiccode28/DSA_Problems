class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int cnt=0;
        for(int i=0;i<N;i++){
            if(arr[i]<=K){
                cnt++;
                K-=arr[i];
            }   
            else
                break;
        }
        return cnt;
    }
};