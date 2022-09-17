#include<iostream>
#include<climits>
using namespace std;
bool valid(int *arr, int n,int m,int mid){
    int student=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=mid)
            pages+=arr[i];
        else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
                
            pages=arr[i];

        }
       

    }
     return true;
}

int Allocate(int *arr,int n,int m){
        if(n<m){
            return -1;
        }
        int s,e,mid,sum=0,max=INT_MIN,ans=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]>max)
                max=arr[i];
        }
        s=max;
        e=sum;
        mid=s+(e-s)/2;
        while(s<=e){
            if(valid(arr,n,m,mid)==true)
            {
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return ans;

}
int main(){
    int st_num=2;
    int arr[4]={12,34,67,90};
    int a=Allocate(arr,4,st_num);
    if(a != -1){
        cout<<a<<endl;
        cout<<"Books are successfully alloted to students ";
    }
        
    else
        cout<<"Unsuccessful allocation";
    return 0;
}