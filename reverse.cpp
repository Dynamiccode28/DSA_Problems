#include<bits/stdc++.h>
using namespace std;
void reverse(int *arr,int n){
    int i,j;
    i=0,j=n-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
int main(){
    int arr[5]={10,20,30,40,50};
    reverse(arr,5);
    cout<<"Reversed array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}