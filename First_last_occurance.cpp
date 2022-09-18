#include<iostream>
#include<vector>
using namespace std;
int first(vector<int> &nums,int target){
	int s=0,e=nums.size()-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(nums[mid]==target){
			ans=mid;
			e=mid-1;
		}
		else if(target<nums[mid]){
			e=mid-1;
		}
		else
			s=mid+1;
		mid=s+(e-s)/2;
		
	}
	return ans;
}
int second(vector<int> &nums,int target){
	int s=0,e=nums.size()-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(nums[mid]==target){
			ans=mid;
			e=s=mid+1;
		}
		else if(target<nums[mid]){
			e=mid-1;
		}
		else
			s=mid+1;
		mid=s+(e-s)/2;
		
	}
	return ans;
}
void Occurance(vector<int> &nums,int target){
	int f=first(nums,target);
	int s=second(nums,target);
	if(f==-1 && s==-1)
	{
		cout<<"Element was not found";
	}
	else{
		cout<<"no. of it occurs : "<<s-f+1<<endl;
		cout<<"First occurance of "<<target<<" is at : "<<f<<endl;
		cout<<"Second occurance of "<<target<<" is at : "<<s<<endl;
	}
}
int main(){
	vector<int>nums={1,3,5,5,5,8,10};
	int key=5;
	Occurance(nums,key);
	return 0;
}
