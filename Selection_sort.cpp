//Time complexity O(n²) used when input array is of small 
#include<iostream>
using namespace std;
void sort(int *arr,int n){
    int min=0;
    for(int i=0;i<n-1;i++){
        min=i;
        //cout<<"min inside first for loop : "<<min<<endl;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
                
        }
        //cout<<"min inside nested for loop : "<<min<<endl;
        swap(arr[min],arr[i]);
    }
}

int main(){

    int arr[5]={64,25,12,22,11};
    sort(arr,5);
    cout<<"After sorting : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
