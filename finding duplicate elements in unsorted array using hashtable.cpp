#include<iostream>
using namespace std;
int main(){
	int n=11;
	int arr[n]={4,8,1,1,8,8,10,12,11,11,10};
	int max,i,j;
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"max - "<<max<<endl;
	int H[max]={0};
	for(int j=0;j<max;j++){
		(H[arr[j]]++);
	}
	for(i=0;i<max;i++){
		if(H[i]>1){
			cout<<i<<" Duplicated "<<H[i]<<" times."<<endl;
		}
	}
	return 0;
	
}
