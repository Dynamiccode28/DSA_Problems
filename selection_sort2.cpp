//Stable selection sort "stable means position of duplicate remains unchanged"
#include<iostream>
using namespace std;
void selection(int *arr,int n){
    int min,k;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        k=arr[min];
        while(min>i){
            arr[min]=arr[min-1];
            min--;
        }
        arr[i]=k;
    }
}
print(int *arr,int n){
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={4,5,3,4,1};
    selection(arr,5);
    print(arr,5);
    return 0;
}