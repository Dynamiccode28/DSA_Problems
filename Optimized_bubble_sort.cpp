#include<iostream>
using namespace std;
void bubbleSort(int *arr,int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            cout<<"array is already sorted required time complexity is O(n) "<<endl;
            break;
        }
    }
}
void print (int *arr,int n){
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]={5,6,3,8,1};//worst case : unsorted array ---->O(n²)
    int arr2[5]={10,20,30,40,50};//best case : sorted array ----> O(n)
    bubbleSort(arr1,5);
    bubbleSort(arr2,5);
    print(arr2,5);

    return 0;
}