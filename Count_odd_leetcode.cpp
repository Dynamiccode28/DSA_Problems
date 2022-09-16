#include<iostream>
using namespace std;
int CountOdds(int low,int high){
	//Approach 1--->iterative approach
	/*int cnt=0;
	for(int i=low;i<=high;i++){
		if(i%2!=0)
			cnt++;
	}
	return cnt;*/
	
	//Approach 2 ---> Formula based
	 int odd=(high+1)/2-(low/2);
	 return odd;//returning answer to function call
}
int main(){
	int low,high;
	cout<<"ENter the low and high : ";
	cin>>low;
	cin>>high;
	cout<<"No. of odds in given range : "<<CountOdds(low,high);
	return 0;
}
