#include <bits/stdc++.h> 
string binaryShopping(string S, int P)
{
    int cnt=0,n=S.size();
    for(int i=1;i<=n&& cnt<2;i++){
        if(S[n-i]=='1'){
            S[n-i]='0';
            cnt++;
        }
    }
    
    if(cnt<2 && cnt!=0){
        S[0]='1';
    }
    return S;
}