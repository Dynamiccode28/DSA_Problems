#include<iostream>
using namespace std;
class array{
	public:
	int *A;
	int size;
	int length;
	void display(array a);
};
void array::display(array a){
	cout<<"elements of an array : ";
	for(int i=0;i<a.length;i++){
		cout<<a.A[i]<<" ";
	}
}
int main(){
	array a;
	cout<<"Enter the size of array : ";
	cin>>a.size;
	cout<<endl;
	a.A=new int[a.size];
	a.length=0;
	int n;
	cout<<"Enter the count of numbers to be entered : ";
	cin>>n;
	cout<<"Enter the elements - ";
	for(int i=0;i<n;i++){
		cin>>a.A[i];
	}
	a.length=n;
	
	a.display(a);
	
	
	return 0;
}
