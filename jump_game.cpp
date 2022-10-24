class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reachability=0;
        for(int i=0;i<n;i++){
            if(reachability<i){
                return false;
            }
            reachability=max(reachability,i+nums[i]);
        }
        return true;
    }
};