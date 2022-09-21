#include<iostream>
using namespace std;
int main(){
	int n,i,j,k;
	n=10;
	int a[n]={1,3,4,5,6,8,9,10,12,14};
	k=10;
	cout<<"pairs - "<<endl;
	for(i=0,j=n-1;j>i;){
		if(a[i]+a[j]==k){
			cout<<a[i]<<','<<a[j]<<endl;
			i++;
			j++;
		}
		else if(a[i]+a[j]<k){
			i++;
		}
		else{
			j--;
		}
	}
	return 0;
}
