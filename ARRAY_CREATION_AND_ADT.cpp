#include<iostream>
using namespace std;
class Array{
	public:
	int A[20];
	int size;
	int length;
	void display();
	void append(int x);
	void Insert(int index,int num);
	int Delete(int index);
	void L_search (int element);
	int B_search (int key);
	void Get(int index);
	int Set(int index,int num);
	int Max();
	int Min();
	int sum();
	float Average();
	void Reverse();
	void Reverse1();
	void left_shift();
	void right_shift();
	void I_N_S();
	int isSorted();
};
int Array::isSorted(){
	int i;
	for(i=0;i<length-1;i++){
		if(A[i]>A[i+1])
			return 0;
	}
	return 1;
	
}
void Array::I_N_S(){
	int num;
	cout<<"Enter the number you wanted to inserted in sorted array - ";
	cin>>num;
	int i=length-1;
	while(A[i]>num){
		A[i+1]=A[i];
		i--;
	}
	A[i+1]=num;
	cout<<"Array After insertion of an element - ";
	for(int i=0;i<length;i++){
		cout<<A[i]<<ends;
	}
} 
void Array::right_shift(){
	for(int i=0;i<length;i++){}
		int T=A[length-1];
	for(int i=length-1;i>=0;i-- ){
		A[i+1]=A[i];
	}
	A[0]=T;
	cout<<"Array - ";
	for(int i=0;i<length;i++){
		
		cout<<A[i]<<ends;
	}
}
void Array::left_shift(){
	int t=A[0];
	for(int i=0;i<length;i++){
		
		A[i]=A[i+1];
		A[length]=t;
		
	}
	cout<<"Array - ";
	for(int i=0;i<length;i++){
		cout<<A[i]<<ends;
	}
	
}
void Array::Reverse1(){//single array sufficient
	for(int i=0,j=length-1;i<j;i++,j--){
		int temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}
	cout<<"Reversed Array - ";
	for(int j=0;j<length;j++){
		cout<<A[j]<<ends;
	}
}
void Array::Reverse(){
	int *B;
	int i,j;
	B=new int [length];
	for(i=length-1,j=0;i>=0;i--,j++){
		B[j]=A[i];
	}
	
	for(i=0;i<length;i++){
		A[i]=B[i];
	}
	cout<<endl;
	cout<<"Reversed array : ";
	for(int k=0;k<length;k++){
		cout<<A[k]<<ends;//ends add space between two elements
	} 
	
}
void Array::Get(int index){
	if(index>=0&&index<length){
		cout<< A[index];
	}	
	else{
		cout<<"Element not present";
	}
}
int Array::Set(int index,int num){
	if(index>=0&&index<=length){
		A[index]=num;
	}
}
int Array::Max(){
	int max=A[0];
	for(int i=1;i<length;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	return max;
}
int Array::Min(){
	int min=A[0];
	for(int i=1;i<length;i++){
		if(A[i]<min){
			min=A[i];
		}
	}
	return min;
}
int Array::sum(){
	int s=0;
	for(int i=0;i<length;i++){
		s+=A[i];
	}
	return s;
} 
float Array::Average(){
	return  (float)(sum())/length;
}
int x;
int Array::Delete(int index){
	if(index>=0&&index<=length){
		x=A[index];
		for(int i=index;i<length;i++){
			A[i]=A[i+1];
		}
		length--;
	}
	
}
void transposition(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void Array::L_search(int element){
	
	for(int i=0;i<length;i++){
		if(A[i]==element){
			cout<<i;
			transposition(&A[i],&A[i-1]);
		}
			
	}

}
int Array::B_search(int key){
 	int l,h,mid;
 	l=0;
 	h=length-1;
 	
 	while(l<=h){
 		mid=(l+h)/2;
 		if(key==A[mid])
 			return mid;
 		else if(key<A[mid])
 			h=mid-1;
 		else
 			l=mid+1;
	}
	return -1;
}

void Array::Insert(int index,int num)
{
	if(index<0){
		cout<<"Invalid Index"<<endl;
	}
	if(index>=0 && index<=length){
		for(int i=length;i>index;i--){
			A[i]=A[i-1];//shifting element to create blank space to store inserted element
		}
	}
	A[index]=num;//inserting an element at given index
	length++; //as element is inserted length of an array increamented

		
	
}

void Array::append(int x)
{
	if(length<size){
		A[length]=x;//adding element at last of array
		length++;
	}
}

void Array::display()
{
	cout<<"Array after performing operation : ";
	for(int i=0;i<length;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int main(){
	Array arr;
	arr={{2,3,4,5,6},10,5};//array,size,length;
	
	
	//arr.search(5)
	//arr.L_search(5);
	//arr.Insert(4,100);
	//arr.append(10);
	//arr.Delete(1);
	//arr.Get(0);
	//arr.Set(3,1);
	//cout<<"Maximum element of an array = "<<arr.Max();
	//cout<<"Manimum element of an array = "<<arr.Min();
	//cout<<"Sum of an elements in an array :  "<<arr.sum();
	//cout<<"Average : "<<arr.Average();
	
	//cout<<"DELETED ELEMENT FROM AN ARRAY : "<<x;
	//cout<<arr.B_search(15);
    //arr.Reverse();
    //arr.Reverse1();
    arr.left_shift();
    //arr.right_shift();
	//arr.display();
	//arr.I_N_S();
	//cout<<"sorted/unsorted(1/0) = "<<arr.isSorted();
	
	return 0;
	
}
