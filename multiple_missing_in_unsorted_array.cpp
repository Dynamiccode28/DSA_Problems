#include<iostream>
using namespace std;
int main(){
	int l,h,i;
	l=1;
	int arr[10]={3,2,4,1,5,7,10,8,11,12};
	h=arr[0];
	for(i=0;i<10;i++){
		if(h<arr[i])
			h=arr[i];
	}
	int H[h]={0};
	for(i=0;i<10;i++){//Hashing
		H[arr[i]]=1;
	}
	cout<<"Missing elements - ";
	for(i=l;i<h;i++){
		if(H[i]==0){
			cout<<i<<ends;
		}
	}
	return 0;
}
