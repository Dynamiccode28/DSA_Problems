#include<iostream>
using namespace std;
void Union(int *arr1,int *arr2,int n1,int n2){
	int M[n1+n2];
	int i,j,k;
	i=j=k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			M[k++]=arr1[i++];
		}
		else if(arr2[j]<arr1[i])
			M[k++]=arr2[j++];
		else if(arr1[i]==arr2[j]){
			M[k++]=arr1[i++];
			j++;
		}
	}
	for(;i<n1;i++){
		M[k++]=arr1[i];
	}
	for(;j<n2;j++){
		M[k++]=arr2[j];
	}
	cout<<"Union of array - ";
	for(i=0;i<k;i++){
		cout<<M[i]<<ends;
	}
	
}
void Intersection(int *arr1,int *arr2,int n1,int n2){
	int M[n1+n2];
	int i,j,k;
	i=j=k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr2[j]<arr1[i])
			j++;
		else if(arr1[i]==arr2[j]){
			M[k]=arr1[i];
			k++;
			i++;
			j++;
		}
	}
	cout<<"Intersection of array - ";
	for(i=0;i<k;i++){
		cout<<M[i]<<ends;
	}
	
}
void Difference(int *arr1,int *arr2,int n1,int n2){
	int M[n1+n2];//dynamically created array to store elements after merging
	int i,j,k;
	i=j=k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			M[k++]=arr1[i++];
		}
		else if(arr2[j]<arr1[i])
			j++;
		else if(arr1[i]==arr2[j]){
			i++;
			j++;
		}
	}
	cout<<"Difference of array - ";
	for(i=0;i<k;i++){
		cout<<M[i]<<ends;
	}
	
}
int main(){
	int n1,n2;
	n1=5;
	int arr1[n1]={1,3,4,7,9};
	n2=5;
	int arr2[n2]={2,3,4,8,10};
	
	//Union(arr1,arr2,n1,n2);
	// Intersection(arr1,arr2,n1,n2);
	Difference(arr1,arr2,n1,n2);
	return 0;
}
