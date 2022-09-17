//GFG problem level:Hard
#include<iostream>
using namespace std;
bool valid(int *arr,int n,int k,long long mid){
    int painters=1;
    int Time=0;
    for(int i=0;i<n;i++){
        if(Time+arr[i]<=mid){
            Time+=arr[i];
        }
        else{
            painters++;
            if(painters>k || arr[i]>mid)
                return false;
            Time=arr[i];
        }
       
    }
     return true;
}
long long minTime(int *arr,int n,int k){
    long long s=0,e=0,mid,ans=0;
    for(int i=0;i<n;i++){
        e+=arr[i];
        if(arr[i]>s)
            s=arr[i];
    }
    if(n==1)
        return arr[0];
    if(n<k)
        return s;
    while(s<=e){
        mid=s+(e-s)/2;
        if(valid(arr,n,k,mid)==true){
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
        
    }
    return ans;
}

int main(){
    int painter=3;
    int arr[5]={5,10,30,20,15};
    cout<<"Minimum time to complete the task : "<<minTime(arr,5,3);

    return 0;
}