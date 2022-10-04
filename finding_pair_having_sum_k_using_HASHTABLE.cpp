#include<iostream>
using namespace std;
int main(){
	int k=10;
	int a[5]={1,2,8,9,10};
	int i,j;
	int max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max){
		max=a[i];
		}
	}
	int H[5]={0};
	for(i=0;i<5;i++){
		if(H[k-a[i]]!=0){
			cout<<" pair having sum 10 - "<<a[i]<<" , "<<k-a[i]<<endl;
		}
		H[a[i]]++;
	}
	return 0;
}
