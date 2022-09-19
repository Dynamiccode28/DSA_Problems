#include<iostream>
using namespace std;
int Root(int num){
    int s=0,e=num;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==num)
            return mid;
        if(square > num)
            e=mid-1;
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Square root of "<<num<<" is : "<<Root(num);
    return 0;
}