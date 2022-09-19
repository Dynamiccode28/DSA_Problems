#include<iostream>
using namespace std;

int Krotation(int *arr,int n){
    int s=0,e=n-1,ans=0;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>=arr[0])
            s=mid+1;//first part is sorted move to unsorted part

        else{
            ans=mid;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5]={5,1,2,3,4};
    cout<<"Number of rotations : "<<Krotation(arr,5);

    return 0;
}