#include<iostream>
using namespace std;
void merg(int *arr1,int *arr2,int n1,int n2){
	int *M=new int[n1+n2];//dynamically created array to store elements after merging
	int i,j,k;
	i=j=k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			M[k++]=arr1[i++];
		}
		else
			M[k++]=arr2[j++];
	}
	for(;i<n1;i++){
		M[k++]=arr1[i];
	}
	for(;j<n2;j++){
		M[k++]=arr2[j];
	}
	int size=n1+n2;
	cout<<"Merged array - ";
	for(i=0;i<size;i++){
		cout<<M[i]<<ends;
	}
	
}

int main(){
	int n1,n2;
	n1=5;
	int arr1[n1]={1,5,3,7,9};
	n2=5;
	int arr2[n2]={2,4,8,6,10};
	merg(arr1,arr2,n1,n2);
	return 0;
}
