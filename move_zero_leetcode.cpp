#include<iostream>
#include<vector>
using namespace std;
void Move(vector<int> &nums){
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
}
int main(){
    vector<int>v={0,1,0,3,12};
    Move(v);
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<' ';
    }
    return 0;
}