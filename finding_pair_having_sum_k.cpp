#include<iostream>
using namespace std;
int main(){
	int n=10;
	int i,j;
	int k=10;
	int a[n]={1,4,6,7,2,8,10,5,11,3};
	cout<<"pairs having sum 10 - "<<endl;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				cout<<a[i]<<","<<a[j]<<endl;
			}
		}
	}
	
	return 0;
}
