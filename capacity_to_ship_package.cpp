class Solution {
public:
    bool valid(vector<int> &weights,int mid,int m){
      int days=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]<=mid){
                load+=weights[i];
            }
            else
            {
                days++;
                if(days>m ||weights[i]>mid)
                    return false;
                load=weights[i];
            }
        }
        return true;
    
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int s,e,ans=0,n=weights.size();
        int mid,sum=0,max=INT_MIN;
        
        if(n<days){
            return 0;
        }
        
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(weights[i]>max)
                max=weights[i];
        }
        s=max;
        e=sum;
        
        while(s<=e){
            mid=s+(e-s)/2;
            if(valid(weights,mid,days)==true){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
                
            
        }
        return ans;
    }
};