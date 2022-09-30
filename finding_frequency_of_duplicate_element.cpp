#include<iostream>
using namespace std;
void freq(int *A,int n){
	for(int i=0;i<n;i++){
			if(A[i]==A[i+1]){
				int j=i+1;
				while(A[j]==A[i])
					j++;
				cout<<A[i]<<" Duplicated "<<j-i<<" times."<<endl;
				i=j-1;
			}
	}
}
int main(){
	int A[10]={3,6,7,7,8,9,10,10,10,11};
	freq(A,10);
	return 0;
}
