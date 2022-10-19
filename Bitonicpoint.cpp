class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int max=0;
	    max=arr[0];
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    return max;
	}

};