#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int>&V,int m){
    int i,j;
    i=m+1;
    j=V.size()-1;
    while(i<j){
        swap(V[i],V[j]);
        i++;
        j--;
    }
}
int main(){
    int pos;
    cout<<"Enter the position : ";
    cin>>pos;
    vector<int>V={1,3,8,6,7,5,2,4};
    if(pos>=1 && pos<=V.size()){
        cout<<"VALID POSITION"<<endl;
    }
    else
        cout<<"Enter valid index between 1 to "<<V.size()<<endl;
    Reverse(V,pos);
    cout<<"Reversed element : ";
    for(auto &i:V){
        cout<<i<<" ";
    }
    return 0;
}