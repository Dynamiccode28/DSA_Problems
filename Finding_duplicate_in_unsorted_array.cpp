#include<iostream>
using namespace std;
int main(){
	int size=10;
	int a[size]={8,6,4,2,8,4,5,5,9,10};
	for(int i=0;i<size-1;i++){
		int count=1;
		if(a[i]!=-1){
			for(int j=i+1;j<size;j++){
				if(a[i]==a[j]){
					count++;
					a[j]=-1;//setting duplicated no.to -1 so that we skip this no. in next iteration. 
				}
			}
			if(count>1){
				cout<<a[i]<<" duplicated "<<count<<" times."<<endl;
			}
		}
		
	}
	return 0;
}

