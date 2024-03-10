#include<iostream>
#include<cmath>
using namespace std;
int getDigit(int num){
    int cnt=0;
    while(num){
        cnt++;
        num/=10;
    }
    return cnt;
}
void IsAg(int dc,int num){
    int n=num,ans=0,rem;
    while(n){
        rem=n%10;
        ans=ans+round(pow(rem,dc));//pow function takes"double" arg. and return "Double" result
        n/=10;

    }
    
    if(ans==num)
        cout<<"Yeahhh! That's the armstrong number";
    else
        cout<<"Nahhhh:/";
        
    
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    IsAg(getDigit(num),num);

    return 0;
}